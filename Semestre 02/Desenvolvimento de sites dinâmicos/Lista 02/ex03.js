
function convertCelsius(graus) {
    graus= parseFloat((graus/(1.8))-32)
    return graus
}
function convertfah(graus) {
   graus = parseFloat((graus*(1.8))+32)
    return graus
}



var opc = Number(prompt("Digite qual opção você quer: 1-celsius| 2-fahrenheit "))

if(opc==1){
    var graus= parseFloat(prompt("Digite a temperatura em fahrenheit "))
    console.log("Você escolheu Celsius")
    console.log("A temperatura em celsius é de: "+convertCelsius(graus));
}
else if(opc==2){
    var graus= parseFloat(prompt("Digite a temperatura em celsius "))
    console.log("Você escolheu fahrenheit")
        console.log("A temperatura em fahrenheit é de: "+convertfah(graus))

}

