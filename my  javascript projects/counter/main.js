const counter = () => {
  let number = 0;
  const increasebtn = document.querySelector(".increase");
  const decreasebtn = document.querySelector(".decrease");
  const resetbtn = document.querySelector(".reset");
  const displaynumber = document.querySelector(".counter p");

  //function for increasing
  increasebtn.addEventListener("click", () => {
    number++;
    updatenumber();
    console.log(number);
    return;
  });

  decreasebtn.addEventListener("click", () => {
    number--;
    updatenumber();
    console.log(number);
    return;
  });

  resetbtn.addEventListener("click", () => {
    number = 0;
    updatenumber();
    console.log(number);
    return;
  });
  const updatenumber = () => {
    displaynumber.textContent = number;
  };

}
counter();
