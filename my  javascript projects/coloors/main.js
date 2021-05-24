//all DOM selectors

const colors = document.querySelectorAll(".colors");
const color = document.querySelectorAll(".color");
const currentHex = document.querySelectorAll(".color h2");
const generatebtn = document.querySelector(".generate button");
const slidersDiv = document.querySelectorAll(".sliders");
const sliders = document.querySelectorAll("input[type=range]");
const copyContainer = document.querySelector(".copy-container");
const copyPopup = document.querySelector(".copy-popup");
const lockBtn = document.querySelectorAll(".lock");
const lockicon = document.querySelectorAll(".lock i");
const saveBtn = document.querySelector(".save-btn");
const savePaletteBtn = document.querySelector(".save-palette-btn");
const closeSaveBtn = document.querySelector(".close-save");
const saveContainer = document.querySelector(".save-container");
const libraryBtn = document.querySelector(".library-btn");
const libraryContainer = document.querySelector(".library-container");
const libraryModal = document.querySelector(".library-modal");
const closeLibraryBtn = document.querySelector(".close-library");
const saveInput = document.querySelector(".save-input");
let initialcolors;
//functions

const generateHex = () => {
  const hexColor = chroma.random();
  return hexColor;
};

function randomColors() {
  initialcolors = [];
  color.forEach(function (div, index) {
    const hextext = div.children[0];
    const randomcolor = generateHex();

    if (div.classList.contains("locked")) {
      initialcolors.push(hextext.innerText);
      return;
    } else {
      initialcolors.push(chroma(randomcolor).hex());
    }

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
  const hue = e.target.parentElement.children[0];
  const brightness = e.target.parentElement.children[2];
  const saturation = e.target.parentElement.children[4];
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
      console.log(huecolor);
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
  copyContainer.classList.add("active");
  copyPopup.classList.add("active");
}

let savedpalettes = [];

function savePalette() {
  copyContainer.classList.remove("active");
  copyPopup.classList.remove("active");
  const name = saveInput.value;
  let colors = [];
  currentHex.forEach((hex) => {
    colors.push(hex.innerText);
  });

  let paletteNumber = savedpalettes.length;
  const paletteObj = { name, colors, number: paletteNumber };
  savedpalettes.push(paletteObj);

  saveToLocalStorage(paletteObj);
  saveToLibrary(paletteObj,savedpalettes)
}

function saveToLocalStorage(paletteObj) {
  let localPalettes;
  if (localStorage.getItem("palettes") === null) {
    localPalettes = [];
  } else {
    localPalettes = JSON.parse(localStorage.getItem("palettes"));
  }
  console.log(localPalettes)
  localPalettes.push(paletteObj)
  localStorage.setItem('palettes', JSON.stringify(localPalettes))
  
  
}

function saveToLibrary(paletteObj, savedpalettes){

  //creating div
  const container = document.createElement('div')
  container.classList.add('preview-container')

  //giving heading to it
  const title = document.createElement('h4')
  title.classList.add('title')
  title.innerText = paletteObj.name

  //creating preview div
  const preview = document.createElement('div')
  preview.classList.add('preview')

  //creating small divs of colpr to represent to palette 
  paletteObj.colors.forEach(smallcolor =>{
    const smallDivs = document.createElement('div')
    smallDivs.classList.add('small-div')
    smallDivs.style.background = smallcolor
    preview.appendChild(smallDivs)
  })

  //creating select button
  const selectBtn = document.createElement('button')
  selectBtn.classList.add('select-btn')
  selectBtn.classList.add(paletteObj.number)
  selectBtn.innerText = 'select'
  
  //appending heading, preview, button to container
  container.appendChild(title)
  container.appendChild(preview)
  container.appendChild(selectBtn)

  //appending container to library 
  libraryModal.appendChild(container)


  //event listner to pickup palette
  selectBtn.addEventListener('click',(e)=>{
    closeLibrary()
    const paletteIndex = e.target.classList[1]
    initialcolors = []
    savedpalettes[paletteIndex].colors.forEach((color, index) =>{
      initialcolors.push(color)
      const colorDivs = document.querySelectorAll('.color')
      colorDivs[index].style.background = color
      const text = colorDivs[index].children[0]
      text.innerText = color
      checkcontrast(color,text)
      
    })
    changingSliders()
  })

}

function closeLibrary(){
  libraryContainer.classList.remove('active')
  libraryModal.classList.remove('active')
}

function getLocal() {
  
  if(localStorage.getItem('palettes') === null){
    localStorage = []
  }else{
    const paletteObjects = JSON.parse(localStorage.getItem('palettes'))
    paletteObjects.forEach(paletteObj=>{
      saveToLibrary(paletteObj, paletteObjects)
    })
  }
  
}



//localStorage.clear()

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

copyPopup.addEventListener("transitionend", () => {
  copyContainer.classList.remove("active");
  copyPopup.classList.remove("active");
});

color.forEach((color, index) => {
  const slider = color.children[1].children[0];

  slider.addEventListener("click", () => {
    slidersDiv[index].classList.toggle("active");
  });
});

color.forEach((color, index) => {
  lockBtn[index].addEventListener("click", () => {
    const lockIcon = lockBtn[index].children[0];
    lockIcon.classList.toggle("fa-lock-open");
    lockIcon.classList.toggle("fa-lock");
    color.classList.toggle("locked");
    console.log(color);
  });
});

saveBtn.addEventListener("click", () => {
  const popup = saveContainer.children[0];
  saveContainer.classList.add("active");
  popup.classList.add("active");
});
closeSaveBtn.addEventListener("click", () => {
  const popup = saveContainer.children[0];
  saveContainer.classList.remove("active");
  popup.classList.remove("active");
});

savePaletteBtn.addEventListener("click", () => {
  savePalette();
  const popup = saveContainer.children[0];
  saveContainer.classList.remove("active");
  popup.classList.remove("active");
});

libraryBtn.addEventListener("click", () => {
  const popup = libraryContainer.children[0];
  libraryContainer.classList.add("active");
  popup.classList.add("active");
});
closeLibraryBtn.addEventListener("click", () => {
  const popup = libraryContainer.children[0];
  libraryContainer.classList.remove("active");
  popup.classList.remove("active");
});


getLocal()
randomColors();
