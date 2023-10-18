let all = "0123456789abcdefghijklmnopqrstuvwqyzABC DEFGHIJKLMNOPQRSTUVWXYZ@!$%^&*()-=+?";

let text = document.getElementById("text");

const FINALTEXT = "Hello World";
let boolComplete = true;

let myAnimation = setInterval(() => {
    boolComplete = true;

    let alreadyText = text.textContent;
    
    let newString = "";
    for(let i = 0 ; i < FINALTEXT.length; i++){
        if(FINALTEXT[i] === alreadyText[i]){
            newString += FINALTEXT[i];
        }else{
            let randomIndex = Math.floor(Math.random() * (all.length - 1));
            newString += all[randomIndex];
            boolComplete = false;
        }
    }
    text.textContent = newString;

    if(boolComplete){
        clearInterval(myAnimation);
    }

}, 50);

