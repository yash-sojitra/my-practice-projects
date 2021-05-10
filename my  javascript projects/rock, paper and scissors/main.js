const game = () => {
  let pscore = 0;
  let cscore = 0;

  //start the game
  const startgame = () => {
    const playbtn = document.querySelector(".intro button");
    const introScreen = document.querySelector(".intro");
    const match = document.querySelector(".match");

    playbtn.addEventListener("click", () => {
      introScreen.classList.add("fadeOut");
      match.classList.remove("fadeout");
      match.classList.add("fadeIn");
    });
  };

  const startmatch = function () {
    const options = document.querySelectorAll(".options button");
    const playerhand = document.querySelector(".player-hand");
    const computerhand = document.querySelector(".computer-hand");
    const hands = document.querySelectorAll(".hands img");
    const computeroptions = ["rock", "paper", "scissors"];

    hands.forEach(hand=>{
      hand.addEventListener('animationend', function(){
        this.style.animation = '';
      })
    })

    options.forEach((option) => {
      option.addEventListener("click", function () {
        console.log(this);
        //for computer choice
        const computernumber = Math.floor(Math.random() * 3);
        const computerchoice = computeroptions[computernumber];

        setTimeout(() => {
          comparehands(this.textContent, computerchoice);

          //image update
          playerhand.src = `./assets/${this.textContent}.png`;
          computerhand.src = `./assets/${computerchoice}.png`;
        }, 2000);
        //animaton
        playerhand.style.animation = "shakeplayer 2s ease";
        computerhand.style.animation = "shakecomputer 2s ease";
      });
    });
    const comparehands = (playerchoice, computerchoice) => {
      const winner = document.querySelector(".winner");

      if (playerchoice === computerchoice) {
        winner.textContent = "it's a tie";
        return;
      }
      if (playerchoice === "rock") {
        if (computerchoice === "scissors") {
          winner.textContent = "Player Wins";
          pscore++;
          updatescore();
          return;
        } else {
          winner.textContent = "Computer wins";
          cscore++;
          updatescore();
          return;
        }
      }
      if (playerchoice === "paper") {
        if (computerchoice === "scissors") {
          winner.textContent = "Computer wins";
          cscore++;
          updatescore();
          return;
        } else {
          winner.textContent === "Player wins";
          pscore++;
          updatescore();
          return;
        }
      }
      if (playerchoice === "scissors") {
        if (computerchoice === "rock") {
          winner.textContent = "Computer wins";
          cscore++;
          updatescore();
          return;
        } else {
          winner.textContent === "Player wins";
          pscore++;
          updatescore();

          return;
        }
      }
    };
  };

  const updatescore = () => {
    const playerscore = document.querySelector(".playerscore p");
    const computerscore = document.querySelector(".computerscore p");

    playerscore.textContent = pscore;
    computerscore.textContent = cscore;
  };
  startgame();
  startmatch();
};
game();
