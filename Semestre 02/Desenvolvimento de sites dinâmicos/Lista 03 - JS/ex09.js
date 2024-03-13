function contarPalavras(str) {
  const palavras = str.toLowerCase().split(/\s+/);
  const contagemPalavras = new Map();

  palavras.forEach(palavra => {
    const palavraLimpa = palavra.replace(/[.,\/#!$%\^&\*;:{}=\-_`~()]/g, '');
    if (palavraLimpa) {
      contagemPalavras.set(palavraLimpa, contagemPalavras.get(palavraLimpa) + 1 || 1);
    }
  });

  return contagemPalavras;
}

// Exemplo de uso:
const frase = "teste teste teste dois";
const resultado = contarPalavras(frase);
console.dir(resultado);