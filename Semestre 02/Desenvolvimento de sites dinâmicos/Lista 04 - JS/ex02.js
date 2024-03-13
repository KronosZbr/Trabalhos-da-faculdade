fetch("https://api.chucknorris.io/jokes/random",{
method: "GET"
})

.then(function(resposta){
return resposta.json();
})

.then(function(respostajson){
    document.querySelector("h1").innerText = respostajson.value
})
.catch(function(){
    console.log("Terminou... POHA DO INTER")
})

