let cp= require("child_process");
console.log("trying to open app");
// cp.execSync("calc");
// cp.execSync("start chrome https:\\www.pepcoding.com")
let output = cp.execSync("node abc.js");
console.log("output" + output);