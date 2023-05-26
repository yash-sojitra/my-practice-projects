var colors = ["green", "red", "yellow", "blue"];
const redAudio = new Audio("./sounds/red.mp3");
const greenAudio = new Audio("./sounds/green.mp3");
const blueAudio = new Audio("./sounds/blue.mp3");
const yellowAudio = new Audio("./sounds/yellow.mp3");

$(document).keypress((e) => {
    if (e){
        startGame()
    }
})

function startGame(){

}

$(".btn").click(function (event) {
    makeSound(event.target.id);
});

function makeSound(id) {
    animate(id);
    switch (id) {
        case "red":
            redAudio.play();
            break;
        case "green":
            greenAudio.play();
            break;
        case "blue":
            blueAudio.play();
            break;
        case "yellow":
            yellowAudio.play();
            break;
        default:
            break;
    }
}

function animate(id) {
    $("#"+id).addClass("pressed");

    setTimeout(function(){
        $("#"+id).removeClass("pressed");
    },100)
}