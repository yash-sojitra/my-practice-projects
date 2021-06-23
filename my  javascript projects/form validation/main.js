const firstName = document.querySelector(".fname-input");
const firstNameMsg = document.querySelector(".fname-msg");
const lastName = document.querySelector(".lname-input");
const lastNameMsg = document.querySelector(".lname-msg");
const email = document.querySelector(".email-input");
const emailMsg = document.querySelector(".email-msg");
const password = document.querySelector(".pswd-input");
const passwordMsg = document.querySelector(".pswd-msg");
const see = document.querySelector(".see");
const submitBtn = document.querySelector(".submit-btn");


//event listner

see.addEventListener("click", (e) => {
  e.preventDefault();
  seePassword();
});

submitBtn.addEventListener("click", (e) => {
  e.preventDefault();
  formValidation();
});

//functions

function hasNumbers(t) {
  var regex = /\d/g;
  return regex.test(t);
}

function seePassword() {
  if (password.type === "password") {
    password.type = "text";
  } else {
    password.type = "password";
  }
}

function formValidation() {
  function firstNameValidation() {
    const hasNum = hasNumbers(firstName.value);

    if (hasNum == true) {
      firstNameMsg.textContent = 'enter valid name'
      firstName.classList.remove('valid')
      firstName.classList.add('invalid')
    } else {
      firstNameMsg.textContent = ''
      firstName.classList.remove('invalid')
      firstName.classList.add('valid')
    }
  }
  function lastNameValidation() {
    const hasNum = hasNumbers(lastName.value);

    if (hasNum == true) {
      lastNameMsg.textContent = 'enter valid name'
      lastName.classList.remove('valid')
      lastName.classList.add('invalid')
    } else {
      lastNameMsg.textContent = ''
      lastName.classList.remove('invalid')
      lastName.classList.add('valid')
    }
  }

  firstNameValidation();
  lastNameValidation();
}
