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
      .addIndicators({
        colorStart: "limeGreen",
        colorTrigger: "white",
        name: "slide",
      })
      .addTo(Controller);

    //cerating a new animation for each page
    const pageTl = gsap.timeline();
    const nextSlide = slides.length - 1 === index ? "end" : slides[index + 1];

    pageTl.fromTo(nextSlide, { y: "0%" }, { y: "50%" });
    pageTl.fromTo(slide, { opacity: 1, scale: 1 }, { opacity: 0, scale: 0 });
    pageTl.fromTo(nextSlide, { y: "50%" }, { y: "0%" });

    //creating a new scene for page
    pageScene = new ScrollMagic.Scene({
      triggerElement: slide,
      triggerHook: 0,
      duration: "100%",
    })
      .addIndicators({
        colorStart: "yellow",
        colorTrigger: "cyan",
        name: "page",
        indent: 200,
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

function cursor(e) {
  mouse.style.left = e.pageX + "px";
  mouse.style.top = e.pageY + "px";
}

function activeCursor(e) {
  item = e.target;
  if (item.classList.contains("logo") || item.classList.contains("burger")) {
    mouse.classList.add("nav-active");
  } else {
    mouse.classList.remove("nav-active");
  }
  if(item.classList.contains('exp')){
    mouse.innerText = 'tap'
    mouse.classList.add('exp-active')
  }else{
    mouse.innerText = ''
    mouse.classList.remove('exp-active')
  }
}

//Event Listners

window.addEventListener("mouseover", activeCursor);
window.addEventListener("mousemove", cursor);

//runnig functions
animateSLides();
