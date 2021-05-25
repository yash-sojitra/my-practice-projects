let Controller;
let slideScene;

function animateSLides() {
  //initializing Controller
  Controller = new ScrollMagic.Controller();

  //adding sliders and navbar
  const sliders = document.querySelectorAll(".slide");
  const nav = document.querySelector("header");

  //looping over all the sliders
  sliders.forEach((slide) => {
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
  });
}

//following cursor
const mouse = document.querySelector(".cursor");

function cursor(e) {
  mouse.style.left = e.pageX + "px";
  mouse.style.top = e.pageY + "px";
}

//Event Listners

window.addEventListener("mousemove", cursor);

//runnig functions
animateSLides();
