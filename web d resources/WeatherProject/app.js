const { log } = require("console");
const express = require("express");
const https = require("https");
const bodyParser = require("body-parser");
const app = express();
app.use(bodyParser.urlencoded({extended:true}));

app.get("/", function(req, res) {
    res.sendFile(__dirname + "/index.html");
})

app.post("/", function (req, res) {
    var query = req.body.cityName;
    var units = "metric";
    var apiKey = "3bf92387ad17931cd3c492a7c1e49d7c";

    const url = "https://api.openweathermap.org/data/2.5/weather?appid="+apiKey +"&units="+units+"&q="+query;

    https.get(url, function (response) {
        response.on("data",function(data) {
            console.log(response.statusCode);

            var weatherData = JSON.parse(data);
            var temp  = weatherData.main.temp;
            var location = weatherData.name;
            var country = weatherData.sys.country;
            var weather = weatherData.weather[0].description;
            var icon = weatherData.weather[0].icon;
            var iconURL = "https://openweathermap.org/img/wn/"+icon+"@2x.png" 
            res.write("<p> weather : "+ weather + "<p>");
            res.write("<h1> the temprature in " + location +"," + country + " is " + temp +" degree celsius.</h1>")
            res.write("<img src="+iconURL+">")
            res.send();
        })
    })
})

app.listen(3000, function() {
    console.log("server started at port 3000");
})