const addbtn = document.querySelector(".add");
const inputtext = document.querySelector("#input");
const todo = document.querySelector(".todo-ul");

addbtn.addEventListener("click", () => {
  //creating a new li
  todolist = document.createElement("li");
  todolist.id = "todo-li";

  //appending to ul
  todo.appendChild(todolist);

  //creating p
  todotext = document.createElement("p");
  todotext.id = "todo-text";
  todotext.textContent = inputtext.value;

  //creating div for buttons
  buttondiv = document.createElement("div");
  buttondiv.id = "btn-div";

  //creating buttons
  checkbtn = document.createElement("button");
  checkbtn.id = "checkbtn";
  checkbtn.innerHTML = '<i class="fas fa-check"></i>';

  trashbtn = document.createElement("button");
  trashbtn.id = "trashbtn";
  trashbtn.innerHTML = '<i class="fas fa-trash"></i>';

  //appending buttons to buttons div
  buttondiv.appendChild(checkbtn);
  buttondiv.appendChild(trashbtn);

  //appending to li
  todolist.appendChild(todotext);
  todolist.appendChild(buttondiv);

  inputtext.value = "";
});

todo.addEventListener("click", (e) => {
  item = e.target;

  if (item.id === "trashbtn") {
    const li = item.parentElement.parentElement;
    li.classList.add('fall')
    li.addEventListener('transitionend', ()=>{
      li.remove();
    })
    
  } else if (item.id === "checkbtn") {
    const li = item.parentElement.parentElement;
    li.classList.toggle("completed");
    console.log(item);
  }
});
