//all DOM selectors
const color = document.querySelectorAll(".color");
const currentHex = document.querySelectorAll(".color h2");
const generatebtn = document.querySelector(".generate button");
const sliders = document.querySelectorAll('input[type=range]')

//functions

const generateHex = () => {
  let letters = "0123456789abcdef";
  let hash = "#";
  for (i = 0; i < 6; i++) {
    hash = hash + letters[Math.floor(Math.random() * 16)];
  }
  return hash;
};

const randomColors = () => {
  color.forEach((div) => {
    const hextext = div.children[0];
    const randomcolor = generateHex();

    hextext.innerText = randomcolor;
    div.style.background = randomcolor;

    const icons = div.children[1].querySelectorAll("button");
    for (icon of icons) {
      checkcontrast(randomcolor, icon);
    }

    checkcontrast(randomcolor, hextext);

    const color = chroma(randomcolor);
    const sliders = div.querySelectorAll(".sliders input");
    const hue = sliders[0];
    const brightness = sliders[1];
    const saturation = sliders[2];

    colorizeSliders(color, hue, brightness, saturation);
  });
};

const checkcontrast = (color, text) => {
  const luminance = chroma(color).luminance();
  if (luminance < 0.5) {
    text.style.color = "white";
  } else {
    text.style.color = "black";
  }
};

const colorizeSliders = (color, hue, brightness, saturation) => {
  //coloring saturation bar

  const minsat = color.set("hsl.s", 0);
  const maxsat = color.set("hsl.s", 1);

  const scalesat = chroma.scale([minsat, color, maxsat]);
  saturation.style.background = `linear-gradient(to right, ${scalesat(
    0
  )}, ${scalesat(1)})`;

  //coloring brightness bar

  const midbright = color.set("hsl.l", 0.5);
  const scalebright = chroma.scale(["black", `${midbright}`, "white"]);

  brightness.style.background = `linear-gradient(to right, ${scalebright(
    0
  )}, ${scalebright(0.5)} ,${scalebright(1)})`;

  //coloring hue bar

  hue.style.background = `linear-gradient(to right, rgb(204,75,75), rgb(204,204,75), rgb(75,204,75), rgb(75,204,204), rgb(75,75,204), rgb(204,75,204),rgb(204,75,75))`;
};

//event listners

generatebtn.addEventListener("click", () => {
  randomColors();
});

sliders.forEach(slider=>{
  slider.addEventListener('input',()=>{
  })
})

randomColors();
