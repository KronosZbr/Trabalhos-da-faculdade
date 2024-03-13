var calc={
    adicao: function(a,b){
        return a+b;
    },
    sub: function(a,b){
        return a-b;
    },
    mult: function(a,b){
        return a*b;
    },
    div:function(a,b){
        return a/b;
    }
}

var num1 = Number(prompt("Digite um numero"))
var num2 = Number(prompt("Digite outro numero"))
var escolha = prompt("Digite a operação que quer fazer: soma | sub | div | mult")
console.log("O número 1 é: ",num1)
console.log("O número 2 é: ",num2)
 if(escolha=="soma"){
    console.log("adição: ", calc.adicao(num1,num2))
}
else if(escolha=="sub"){
    console.log("subtração: ", calc.sub(num1,num2))
}
else if(escolha=="div"){
    if(num2==0){
        console.log("não é possível dividir um número por ZERO!")
    }else{
    console.log("divisão: ", calc.div(num1,num2))
}
}

else if(escolha=="mult"){
    console.log("multiplicação: ", calc.mult(num1,num2))
}
else{
    console.log("escolha uma opção valida")
}



