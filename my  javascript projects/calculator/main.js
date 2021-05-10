const calculator = () => {
  const one = document.querySelector(".one");
  const two = document.querySelector(".two");
  const three = document.querySelector(".three");
  const four = document.querySelector(".four");
  const five = document.querySelector(".five");
  const six = document.querySelector(".six");
  const seven = document.querySelector(".seven");
  const eight = document.querySelector(".eight");
  const nine = document.querySelector(".nine");
  const zero = document.querySelector(".zero");
  const input = document.querySelector(".input");
  const calculatorsection = document.querySelectorAll(".calculator");

  //  one.addEventListener("click", () => {
  //      const item = input.textContent + one.value;
  //     input.textContent = item;
  // });
  // two.addEventListener("click", () => {
  //   const item = input.textContent + two.value;
  //    input.textContent = item;
  //  });
  //  three.addEventListener("click", () => {
  //    const item = input.textContent + three.value;
  //    input.textContent = item;
  //  });
  //  four.addEventListener("click", () => {
  //    const item = input.textContent + four.value;
  //    input.textContent = item;
  //  });
  //  five.addEventListener("click", () => {
  //    const item = input.textContent + five.value;
  //    input.textContent = item;
  //  });
  //  six.addEventListener("click", () => {
  //    const item = input.textContent + six.value;
  //    input.textContent = item;
  //  });
  //  seven.addEventListener("click", () => {
  //    const item = input.textContent + seven.value;
  //    input.textContent = item;
  //  });
  //  eight.addEventListener("click", () => {
  //    const item = input.textContent + eight.value;
  //    input.textContent = item;
  //  });
  //  nine.addEventListener("click", () => {
  //    const item = input.textContent + nine.value;
  //    input.textContent = item;
  // });
  //  zero.addEventListener("click", () => {
  //    const item = input.textContent + zero.value;
  //    input.textContent = item;
  //  });

  calculatorsection.forEach((buttons) => {
    buttons.addEventListener("click", function () {
        console.log(this);
      //const item = input.textContent + this.value;
      //input.textContent = item;
    });
  });
};
calculator();
