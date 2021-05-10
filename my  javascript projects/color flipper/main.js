const colorflipper = () => {
  const text = document.querySelector(".text");
  const button = document.querySelector(".btn");
  const background = document.querySelector(".main");

  button.addEventListener("click", () => {
    const colors = [
      "Red",
      "Green",
      "Blue",
      "Yellow",
      "Brown",
      "Black",
      "Pink",
      "Violet",
      'hotpink',
      'orange',
      'cyan',
      'magenta',
      'chocolate',
      'aqua',
      'lime',
      'navy'
    ];

    const colornumber = Math.floor(Math.random() * 16);
    const pickedColor = colors[colornumber];
    console.log(pickedColor);
    background.style.background = pickedColor;
    text.textContent = pickedColor;
    if (colornumber === 5) {
      text.style.color = "rgb( 206, 206, 206)";
      return;
    }else{
        text.style.color = "black";
    }
  });
};

colorflipper();
