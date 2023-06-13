const express = require("express")
const app = express();

app.get("/", function (req, res) {
    res.send("hello");
})

app.listen(3000, function () {
    console.log("server running on localhost 3000");
});