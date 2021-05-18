//all DOM selectors

const colors = document.querySelectorAll(".colors");
const color = document.querySelectorAll(".color");
const currentHex = document.querySelectorAll(".color h2");
const generatebtn = document.querySelector(".generate button");
const sliders = document.querySelectorAll("input[type=range]");
const copyContainer = document.querySelectorAll(".copy-container");
const copyPopup = document.querySelectorAll(".copy-popup");

let initialcolors;
//functions

const generateHex = () => {
  const hexColor = chroma.random();
  return hexColor;
};

function randomColors() {
  initialcolors = [];
  color.forEach(function (div) {
    const hextext = div.children[0];
    const randomcolor = generateHex();

    initialcolors.push(chroma(randomcolor).hex());

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
  changingSliders();
}

const checkcontrast = (bgcolor, text) => {
  const luminance = chroma(bgcolor).luminance();
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
const hslControls = (e) => {
  const index =
    e.target.getAttribute("data-hue") ||
    e.target.getAttribute("data-bright") ||
    e.target.getAttribute("data-sat");
  const icons = color[index].querySelectorAll(".buttons button");
  const hue = e.target.parentElement.children[1];
  const brightness = e.target.parentElement.children[3];
  const saturation = e.target.parentElement.children[5];
  const bgcolor = initialcolors[index];

  let hextext = color[index].children[0];

  let newcolor = chroma(bgcolor)
    .set("hsl.h", hue.value)
    .set("hsl.s", saturation.value)
    .set("hsl.l", brightness.value);

  hextext.textContent = newcolor;
  color[index].style.background = newcolor;
  checkcontrast(chroma(newcolor), hextext);

  for (icon of icons) {
    checkcontrast(chroma(newcolor), icon);
  }

  colorizeSliders(newcolor, hue, brightness, saturation);
};

function changingSliders() {
  const sliders = document.querySelectorAll(".sliders input");
  sliders.forEach((slider) => {
    if (slider.name === "hue") {
      const huecolor = initialcolors[slider.getAttribute("data-hue")];
      const huevalue = chroma(huecolor).hsl()[0];
      slider.value = Math.floor(huevalue);
    }
    if (slider.name === "brightness") {
      const brightcolor = initialcolors[slider.getAttribute("data-bright")];
      const brightvalue = chroma(brightcolor).hsl()[2];
      slider.value = Math.floor(brightvalue * 100) / 100;
    }
    if (slider.name === "saturation") {
      const satcolor = initialcolors[slider.getAttribute("data-sat")];
      const satvalue = chroma(satcolor).hsl()[1];
      slider.value = Math.floor(satvalue * 100) / 100;
    }
  });
}

function copyToClipboard(hex) {
  const textarea = document.createElement("textarea");
  textarea.value = hex.textContent;
  document.body.appendChild(textarea);
  textarea.select();
  document.execCommand("copy");
  document.body.removeChild(textarea);

  //pop up animation
  const popup = copyContainer.children[0]
  copyContainer
}

//event listners

generatebtn.addEventListener("click", () => {
  randomColors();
});

sliders.forEach((slider) => {
  slider.addEventListener("input", hslControls);
});

currentHex.forEach((hex) => {
  hex.addEventListener("click", () => {
    copyToClipboard(hex);
  });
});

randomColors();
