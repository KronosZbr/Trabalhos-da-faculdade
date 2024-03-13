async function funcao() {
  var resultado = await fetch("https://api.chucknorris.io/jokes/random", {
    method: "GET"
  });

  var respostajson = await temperatura.json();

  document.querySelector("h1").innerText = respostajson.value;
}
cadeira();
