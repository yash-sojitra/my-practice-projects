
var colors = ["green", "red", "yellow", "blue"];

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
            const redAudio = new Audio("./sounds/red.mp3");
            redAudio.play();
            break;
        case "green":
            const greenAudio = new Audio("./sounds/green.mp3");
            greenAudio.play();
            break;
        case "blue":
            const blueAudio = new Audio("./sounds/blue.mp3");
            blueAudio.play();
            break;
        case "yellow":
            const yellowAudio = new Audio("./sounds/yellow.mp3");
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