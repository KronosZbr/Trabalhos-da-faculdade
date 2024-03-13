async function funcao() {
  var resultado = await fetch(
    "https://run.mocky.io/v3/8681aefc-594b-487d-a47d-76127e0862e5",
    {
      method: "GET",
    }
  );

  var respostajson = await resultado.json();
  console.log(respostajson)
  respostajson.noticias.forEach(element => {
    var div = document.createElement("div");
    div.innerHTML = `
<h1>${element.titulo}</h1>
<p>${element.conteudo}</p>
<img src="${element.url}">


`
document.body.appendChild(div)
  });
}
funcao();
