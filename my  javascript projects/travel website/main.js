let Controller;
let slideScene;
let pageScene;

function animateSLides() {
  //initializing Controller
  Controller = new ScrollMagic.Controller();

  //adding sliders and navbar
  const sliders = document.querySelectorAll(".slide");
  const nav = document.querySelector("header");

  //looping over all the sliders
  sliders.forEach((slide, index, slides) => {
    const revealImg = slide.querySelector(".reveal-img");
    const Img = slide.querySelector("img");
    const revealText = slide.querySelector(".reveal-txt");

    //generating a timeline
    const slideTl = gsap.timeline({
      defaults: { duration: 1, ease: "power2.inOut" },
    });

    slideTl.fromTo(revealImg, { x: "0%" }, { x: "100%" });
    slideTl.fromTo(revealText, { x: "0%" }, { x: "100%" }, "-=0.8");
    slideTl.fromTo(Img, { scale: "2" }, { scale: "1" }, "-=1");
    slideTl.fromTo(nav, { y: "-100%" }, { y: "0%" }, "-=0.5");

    //creating a new scene for slide
    slideScene = new ScrollMagic.Scene({
      triggerElement: slide,
      triggerHook: 0.25,
      reverse: false,
    })
      .setTween(slideTl)
      .addTo(Controller);

    //creating a new animation for each page
    const pageTl = gsap.timeline();
    let nextSlide = slides.length - 1 === index ? "end" : slides[index + 1];

    pageTl.fromTo(nextSlide, { y: "0%" }, { y: "50%" });
    pageTl.fromTo(slide, { opacity: 1, scale: 1 }, { opacity: 0, scale: 0 });
    pageTl.fromTo(nextSlide, { y: "50%" }, { y: "0%" });

    //creating a new scene for page animation
    pageScene = new ScrollMagic.Scene({
      triggerElement: slide,
      triggerHook: 0,
      duration: "100%",
    })
      .setPin(slide, { pushFollowers: false })
      .setTween(pageTl)
      .addTo(Controller);
  });
}

//following cursor
const mouse = document.querySelector(".cursor");
const logo = document.querySelector(".logo");
const burger = document.querySelector(".burger");
const navBar = document.querySelector(".nav-bar");
const body = document.querySelector("body");

//following cursor function
function cursor(e) {
  mouse.style.left = e.pageX + "px";
  mouse.style.top = e.pageY + "px";
}

function activeCursor(e) {
  //cursor for hovering over navbar and logo
  item = e.target;
  if (item.classList.contains("logo") || item.classList.contains("burger")) {
    mouse.classList.add("nav-active");
  } else {
    mouse.classList.remove("nav-active");
  }

  //cursor for hovering over explore buttons
  if (item.classList.contains("exp")) {
    mouse.innerText = "tap";
    mouse.classList.add("exp-active");
  } else {
    mouse.innerText = "";
    mouse.classList.remove("exp-active");
  }
}

function navToggle(e) {
  //toggling navbar
  if (!navBar.classList.contains("active")) {
    gsap.to(".line1", { rotate: "45", y: "5", backgroundColor: "black" });
    gsap.to(".line2", { rotate: "-45", y: "-5", backgroundColor: "black" });
    gsap.to(".nav-bar", 1, { clipPath: "circle(2500px at 100% -10%" });
    gsap.to(".logo", 1, { color: "black" });
    gsap.to(".cursor", { border: "2px solid black" });
    navBar.classList.add("active");
    body.classList.add("hide");
  } else {
    gsap.to(".line1", { rotate: "0", y: "0", backgroundColor: "white" });
    gsap.to(".line2", { rotate: "0", y: "0", backgroundColor: "white" });
    gsap.to(".nav-bar", 1, { clipPath: "circle(50px at 100% -10%" });
    gsap.to(".logo", 1, { color: "white" });
    gsap.to(".cursor", { border: "2px solid white" });
    navBar.classList.remove("active");
    body.classList.remove("hide");
  }
}

//adding that scroll-effct to other page

let imageScene;

function animateImages() {
  controller = new ScrollMagic.Controller();

  const imageSlides = document.querySelectorAll(".detail-slide");
  imageSlides.forEach((slide, index, slides) => {
    const image = slide.querySelector(".image");
    let nextSlide = slides.length - 1 === index ? "end" : slides[index + 1];
    let nextImg = nextSlide.querySelector(".image");

    const slideTl = gsap.timeline();
    slideTl.fromTo(slide, 1, { opacity: 1 }, { opacity: 0 });
    slideTl.fromTo(nextSlide, 1, { opacity: 0 }, { opacity: 1 });
    slideTl.fromTo(
      nextImg,
      1,
      { x: "30%", opacity: 0 },
      { x: "0%", opacity: 1 }
    );

    slideScene = new ScrollMagic.Scene({
      triggerElement: slide,
      triggerHook: 0,
      duration: "100%",
    })
      .setPin(slide, { pushFollowers: false })
      .setTween(slideTl)
      .addTo(controller);
  });
}

//barba page transition
barba.init({
  views: [
    {
      namespace: "home",
      beforeEnter() {
        animateSLides();
      },
      beforeLeave() {
        slideScene.destroy();
        pageScene.destroy();
        controller.destroy();
      },
    },
    {
      namespace: "fashion",
      beforeEnter() {
        logo.href = "../index.html";
        window.scrollTo(0, 0);
        gsap.fromTo("header", { y: "-100%" }, { y: "0%" }, "-=0.5");
        animateImages();
      },
      beforeLeave() {
        controller.destroy();
        slideScene.destroy();
      },
    },
  ],
  transitions: [
    {
      leave({ current, next }) {
        let done = this.async();

        //creatiing animation
        const tl = gsap.timeline({
          defaults: { ease: "power2.inOut" },
        });
        tl.fromTo(current.container, 1, { opacity: 1 }, { opacity: 0 });
        tl.fromTo(
          ".swipe",
          0.75,
          { x: "-100%" },
          { x: "0%", stagger: 0.15, onComplete: done },
          "-=0.5"
        );
      },
      enter({ current, next }) {
        let done = this.async();

        //creatiing animation
        const tl = gsap.timeline({
          defaults: { ease: "power2.inOut" },
        });
        tl.fromTo(
          ".swipe",
          0.75,
          { x: "0%" },
          { x: "100%", stagger: 0.15, onComplete: done }
        );
        tl.fromTo(next.container, 1, { opacity: 0 }, { opacity: 1 });
      },
    },
  ],
});

//Event Listners
burger.addEventListener("click", navToggle);
window.addEventListener("mouseover", activeCursor);
window.addEventListener("mousemove", cursor);
