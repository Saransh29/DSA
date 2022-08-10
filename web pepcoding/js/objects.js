//object-> group of key : value pair
//key : value -> property
//key : funtion => method
let cap = {
    name: "ab",
    lastname:"cd",
    address:{
        city:"xy",
        state:"z"
    }
    ,age: 21,
    isABC:true
    ,
    sayHi:function(){
        console.log("says hi");
    }
};
// //get

// console.log(cap.name);
// console.log(cap.age);
// cap.sayHi();

//set

// console.log("cap",cap);
// cap.age=35;
// cap.friends=["a","b","c"];
// console.log("cap",cap);

// delete cap.address
// console.log("cap",cap);


// for(let key in cap){
//     console.log(key,":",cap[key]);   
// }

let propkey = "age"
console.log(cap.age);
console.log(cap[propkey]);