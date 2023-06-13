const express = require("express")
const app = express();

app.get("/", function(request, response) {
    response.send("hello");
})
app.get("/contact", function(request, response) {
    response.send("contact me at: yashsojitra97@gmail.com");
})
app.get("/about", function(request, response) {
    response.send("I am yash");
})

app.listen(3000, function() {
    console.log("hello from the server side");
})