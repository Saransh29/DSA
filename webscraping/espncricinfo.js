const request = require("request");
const cheerio = require("cheerio");
const chalk = require("chalk");

request(
  "https://www.espncricinfo.com/series/indian-premier-league-2022-1298423/kolkata-knight-riders-vs-lucknow-super-giants-66th-match-1304112/live-cricket-score",
  cb
); //callback

function cb(error, response, html) {
  if (error) {
    console.error("error:", error); // Print error
  } else {
    handlehtml(html);
  }
}
function handlehtml(html) {
  let selTool = cheerio.load(html);

  let contentArr = selTool("#first-letter");

  let pom = selTool(contentArr[0]).text();

  console.log(chalk.red("player of the match: " + pom));
}
