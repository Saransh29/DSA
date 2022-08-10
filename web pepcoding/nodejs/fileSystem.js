let fs = require("fs");

//read
// let buffer = fs.readFileSync("abc.js");
// console.log("bin data"+buffer);

//create
// fs.openSync("pqr.txt","w");

//write - create and replace
// fs.writeFileSync("abc.txt","writing via fileSystem module node js");

//update - appends
// fs.appendFileSync("abc.txt","   appended text");

//create folder
// fs.mkdirSync("mydir");

// fs.writeFileSync("mydir/pqr.txt","acacascas");

// let content = fs.readdirSync("mydir");
// console.log(content);

// for(let i=0;i<content.length;i++)
// {
//     console.log("file",content[i],"is removed");
//     fs.unlinkSync("mydir/"+content[i]);
// }

//remove folder  
// fs.rmdirSync("mydir");

// fs.existsSync -> if a file exists at a path->t/f

// let detailobj = fs.lstatSync(__dirname + "\\fileSystem.js");
// let ans = detailobj.isFile();
// console.log(ans);
// ans = detailobj.isDirectory();
// console.log(ans);

//make multiple folders with files and data within files
for(let i=1;i<=10;i++)
{
    let dirPathtoMake = `Lecture-${i}`;
    fs.mkdirSync(dirPathtoMake);
    fs.writeFileSync(dirPathtoMake + "\\"+"readme.md",` # readme for ${dirPathtoMake}`);
}