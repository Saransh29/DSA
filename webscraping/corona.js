const request = require('request');
const cheerio = require("cheerio");
const chalk = require("chalk");  //for coloured text in terminal


request('https://www.worldometers.info/coronavirus', cb); //callback

function cb(error, response, html) {
    if (error) {
        console.error('error:', error); // Print error
    }
    else{
        handlehtml(html);
    }
        
    
}
function handlehtml(html) {
    let selTool = cheerio.load(html);

    let contentArr = selTool("#maincounter-wrap span");
    // [i] -> wrap selTool
    // for (let i = 0; i < contentArr.length; i++) {
    //     let data = selTool(contentArr[i]).text();
    //     console.log("data",data);
    // }
    let total = selTool(contentArr[0]).text();
    let deaths = selTool(contentArr[1]).text();
    let recovered = selTool(contentArr[2]).text();
    // console.log(h1s.length);
    console.log(chalk.gray("Total Cases: "+total));
    console.log(chalk.red("Deaths: "+deaths));
    console.log(chalk.green("Recovery : "+recovered));


}