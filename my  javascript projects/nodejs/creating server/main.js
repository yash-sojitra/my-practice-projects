const http = require("http");
const fs = require("fs");
const html = fs.readFileSync('../../coloors/index.html');

const server = http.createServer((req, res) => {
  (res.statusCode = 200), res.setHeader("Content-Type", "text/html");
  res.end(html);
});

server.listen(80, "127.0.0.1");

console.log("server created at port 80");
