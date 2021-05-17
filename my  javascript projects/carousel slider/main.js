const slider = document.querySelector(".img-slider");
const images = document.querySelectorAll(".img");

const prevbtn = document.querySelector(".prevbtn");
const nextbtn = document.querySelector(".nextbtn");

let counter = 1;
let size = images[counter - 1].clientWidth;

slider.style.transform = `translateX(-${size * counter}px)`;

nextbtn.addEventListener("click", () => {
  if (counter >= images.length - 1) return;
  counter++;
  slider.style.transform = `translateX(-${size * counter}px)`;
  slider.style.transition = "transform 0.4s ease-in-out";
  console.log(counter);
});

prevbtn.addEventListener("click", () => {
    if (counter <= 0) return;
  counter--;
  slider.style.transform = `translateX(-${size * counter}px)`;
  slider.style.transition = "transform 0.4s ease-in-out";
});

slider.addEventListener("transitionend", () => {
  if (images[counter].id === "last-clone") {
    slider.style.transition = "none";
    counter = images.length - 2;
    slider.style.transform = `translateX(-${size * counter}px)`;
  }
  if (images[counter].id === "first-clone") {
    slider.style.transition = "none";
    counter = images.length - counter;
    slider.style.transform = `translateX(-${size * counter}px)`;
  }
});
