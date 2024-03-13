var i = Number(prompt("Digite quantos números quer digitar"));
var total = Number(0)
var div = i
for(i;i>0;i--){
    var soma = Number(prompt("Digite o numero"));
    var total = total + soma;
}
console.log("O Resultado da média é: "+total/div)