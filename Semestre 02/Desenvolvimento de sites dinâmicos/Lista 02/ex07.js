var peso = parseFloat(prompt("Digite o seu peso em KG"))
var altura = parseFloat(prompt("Digite sua altura em metros"))
var imc  =peso / (altura*altura)
if(imc<18.50){
    console.log("o Seu imc de: "+ imc.toFixed(2) + " indica que você está abaixo do peso")
}
else if(imc>=18.50 && imc<25){
    console.log("o Seu imc de: "+ imc.toFixed(2) + " indica que você está com o peso normal")
}
else if(imc>=25){
    console.log("o Seu imc de: "+ imc.toFixed(2) + " indica que você está acima do peso")
}