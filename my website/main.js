const burgerBtn = document.querySelector(".burger");
const closeBtn = document.querySelector(".close");
const navbar = document.querySelector(".navbar");
const list = document.querySelector(".navbar ul");

burgerBtn.addEventListener("click", () => {
  navbar.style.left = "0vw";
  list.style.opacity = "1";
});

closeBtn.addEventListener("click", () => {
  navbar.style.left = "-100vw";
  list.style.opacity = "0";
});
