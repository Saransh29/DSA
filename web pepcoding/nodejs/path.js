let fs = require("fs");
let path = require("path");
// for(let i=1;i<=10;i++)
// {
//     let dirPathtoMake = `Lecture-${i}`;
//     fs.mkdirSync(dirPathtoMake);
//     fs.writeFileSync(path.join(dirPathtoMake ,"readme.md"),` # readme for ${dirPathtoMake}`);
// }

let ext = path.extname(path.join(__dirname,"abc.js"));
console.log("ext",ext);
let name = path.basename(__dirname);
console.log(name);
name = path.basename(path.join(__dirname,"abc.js"));
console.log(name);


