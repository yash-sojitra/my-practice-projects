//selecting objects
const title = document.querySelector("#title");
const dice1 = document.querySelector(".img1");
const dice2 = document.querySelector(".img2");

//fuction to generate random number
function generateRandom() {
    return num = Math.floor(Math.random() * 6 + 1);
}


var num1 = generateRandom();
var num2 = generateRandom();

//setting source of images according to generated number
dice1.src = "./images/dice" + num1 + ".png";
dice2.src = "./images/dice" + num2 + ".png";

//updating title
if (num1 > num2) {
    title.textContent = "🚩player1 Wins";
}
else if (num1 < num2) {
    title.textContent = "player2 Wins🚩";
}
else {
    title.textContent = "It's a draw";
}