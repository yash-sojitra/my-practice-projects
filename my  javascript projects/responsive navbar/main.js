const burgerbtn = document.querySelector(".burger");
const navbar = document.querySelector(".navbar");
const options = document.querySelector(".navbar ul");
const list = document.querySelectorAll(".navbar ul li");

burgerbtn.addEventListener("click", () => {
  navbar.style.left = "0px";
  options.style.left = "0px";
  burgerbtn.style.top = "-50px";
  //list.style.opacity = "1";
});
