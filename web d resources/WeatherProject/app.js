const { log } = require("console");
const express = require("express");
const https = require("https");
const app = express();

app.get("/", function(req, res) {
    
    const url = "https://api.openweathermap.org/data/2.5/weather?lat=23.308155&lon=70.800705&appid=3bf92387ad17931cd3c492a7c1e49d7c&units=metric"

    https.get(url, function (response) {
        response.on("data",function(data) {
            console.log(response.statusCode);

            var weatherData = JSON.parse(data);
            var temp  = weatherData.main.temp;
            var location = weatherData.name;

            res.send("<h1> the temprature in " + location + " is " + temp +" degree celcius.</h1>")
        })
    })
})

app.listen(3000, function() {
    console.log("server started at port 3000");
})