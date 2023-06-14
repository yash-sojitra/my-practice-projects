const bodyParser = require("body-parser");
const express = require("express");
const app = express();

app.use(bodyParser.urlencoded({extended:true}));

app.get("/",function (req, res) {
    res.sendFile(__dirname + "/bmiCalc.html");
})

app.post("/bmicalculator", function (req, res) {
    var height = parseFloat(req.body.height);
    var weight = parseFloat(req.body.weight);

    var BMI = weight / (height**2);

    res.send("your BMI is : " + BMI);
})

app.listen(3000, function () {
    console.log("listening on port 3000");
})