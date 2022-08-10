//Non primitive arrays,objs, function

function sayHi()
{
    // console.log("Hello from sayHI");
    // console.log("param received",param);
    let rVal= Math.random() > 0.5 ? true :"Less than 0.5"
    return rVal;
}
// sayHi(10);
// sayHi("Hello");

let rVal=sayHi([1,2,3,4,5]);
console.log("rval",rVal);
