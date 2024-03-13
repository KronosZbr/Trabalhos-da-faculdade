var palavra;
function negrito(palavra) {
palavra = window.prompt("Digite uma palavra: ");
return(palavra)
} 
console.log("%c %s","color:blue; font-weight:bold",negrito(palavra))