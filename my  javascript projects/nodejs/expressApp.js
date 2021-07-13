const express = require("express");
const app = express();
const port = 80;

app.get("/", (req, res) => {
  res.status(200).send("this is my first express app");
});

app.get("/about", (req, res) => {
  res.status(200).send("this is about page of my first express app");
});

app.post("/about", (req, res) => {
  res.status(200).send("this is about page by post of my first express app");
});

app.get("/this", (req, res) => {
  res.status(404).send("page not found");
});

app.listen(port, () => {
  console.log(`server successfully started at ${port}`);
});
