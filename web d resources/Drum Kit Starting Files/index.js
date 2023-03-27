var key = document.querySelectorAll(".drum");

for (let i = 0; i < key.length; i++) {
    key[i].addEventListener("click",onclick);
}

function onclick() {
    var audio = new Audio("sounds/tom-2.mp3");
    audio.play();
}