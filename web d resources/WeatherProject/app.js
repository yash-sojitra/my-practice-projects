const { log } = require("console");
const express = require("express");
const https = require("https");
const app = express();

app.get("/", function(req, res) {
    
    const url = "https://api.openweathermap.org/data/2.5/weather?appid=&units=metric&q=Rajkot,IN"

    https.get(url, function (response) {
        response.on("data",function(data) {
            console.log(response.statusCode);

            var weatherData = JSON.parse(data);
            var temp  = weatherData.main.temp;
            var location = weatherData.name;
            var weather = weatherData.weather[0].description;
            var icon = weatherData.weather[0].icon;
            var iconURL = "https://openweathermap.org/img/wn/"+icon+"@2x.png" 
            res.write("<p> weather : "+ weather + "<p>");
            res.write("<h1> the temprature in " + location + " is " + temp +" degree celcius.</h1>")
            res.write("<img src="+iconURL+">")
            res.send();
        })
    })
})

app.listen(3000, function() {
    console.log("server started at port 3000");
})