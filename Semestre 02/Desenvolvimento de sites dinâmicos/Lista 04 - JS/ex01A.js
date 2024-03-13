async function funcao() {
    var resultado = await fetch("https://run.mocky.io/v3/06931d32-714d-493e-a33c-bf5c9d5e41c3", {
      method: "GET"
    });
  
    var respostajson = await resultado.json();
  
    document.querySelector("h1").innerText = `
    A temperatura é de: ${respostajson.tempo.temperatura} graus
    `;
    
    document.querySelector("img").src = respostajson.tempo.url
   


  }
  funcao();