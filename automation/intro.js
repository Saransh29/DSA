const puppeteer = require("puppeteer");
let page;
const browseropenpromise = puppeteer.launch({
    headless : false,
    // slowMo : true,
    defaultViewport : null,
    args:["--start-maximized"]

});

browseropenpromise
    .then(function(browser){
        //currently opened
        const pagearrpromise = browser.pages();
        return pagearrpromise;
    }).then(function(browserpages) {
            page = browserpages[0];
            let gotopromise = page.goto("https://www.google.com/");
            return gotopromise;
    }).then(function(){
        let elemwaitpromise = page.waitForSelector("input[type='text']",{visible : true});
        return elemwaitpromise;
    }).then(function(){
        let keyssendpromise = page.type("input[type='text']","pepcoding");
        return keyssendpromise;
    }).then(function(){
        let enterpressed = page.keyboard.press("Enter");
        return enterpressed;
    }).then(function() {
        let elementwaitpromise = page.waitForSelector("h3.LC20lb.MBeuO.DKV0Md",{visible : true});
        return elementwaitpromise;
    }).then(function(){
        let keyswillsendpromise = page.click("h3.LC20lb.MBeuO.DKV0Md");
        return keyswillsendpromise;
    }).catch(function(err) {
        console.log(err);
    })
console.log("after");
