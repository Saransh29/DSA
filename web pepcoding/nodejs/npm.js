// npm i chalk@2.4.1
let chalk = require("chalk");
let figlet = require("figlet");

console.log(chalk.blue('Hello world'));
console.log(chalk.bold('Hello world'));
console.log(chalk.underline('Hello world'));
console.log(chalk.bgBlueBright('Hello world'));

console.log(figlet.textSync('Hello world'));



