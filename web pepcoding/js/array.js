//array declare 
//;et arr=[]
let array = [1,2,3,4,5]
// console.log(array);
// console.log(array.length);
// let i=0;
// while(i<array.length)
// {   
//     console.log("element at index",i,"is",array[i]);
//     i++;
// }

//push,unshift
array.push("last value");
array.unshift("first value");
console.log(array);
console.log("----------------");

array.shift();
array.pop();
console.log(array);
console.log("----------------");

//start idx ,end idx
let partofarray = array.slice(2,4);
console.log(partofarray);


array.splice(2,1);
console.log(array);
