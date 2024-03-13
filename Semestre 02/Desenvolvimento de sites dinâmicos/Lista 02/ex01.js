do{
    var jogar=prompt("Digite 01 para jogar e 0 para parar")
    if(jogar==1){
        console.log("O resultado dos dados é: "+aleatorio())
    }
    else if(jogar==0){
       console.log("CABO")
       break;
    }
        
}while(jogar==1)
function aleatorio(){
   const naleatorio =Math.floor( Math.random()*6)+1

    return naleatorio
}