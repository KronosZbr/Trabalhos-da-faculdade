var a = window.prompt('digite o número 1');
var b = window.prompt('digite o número 2');
function calcular(V1,V2){
return Number(V1) + Number(V2);
}
var c= calcular(a,b)
console.info("{valor a: " +a + " }" + "{valor b: " + b + " }" + " é igual a " +"%c %s"," color:black;font-weight:bold",`{${c}}`);