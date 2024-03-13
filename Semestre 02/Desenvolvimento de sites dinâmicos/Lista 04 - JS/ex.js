console.log("iniciou")

var minhapromessa = new Promise(function(deuCerto,DeuErrado){
setTimeout(function(){
    console.log("sapoha ta rodando")
    DeuErrado();
}, 5000)
});
minhapromessa 
.then(function(){
console.log("Terminou... DALE GREMIO")
})
.catch(function(){
    console.log("Terminou... POHA DO INTER")
})