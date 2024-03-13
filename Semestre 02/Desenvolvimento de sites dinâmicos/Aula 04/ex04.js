function somar(array) {
    let somar = 0;
    for (let i = 0; i < array.length; i++) {
        somar += array[i];
    }
    return somar;
}

const numeros = [10, 10, 15, 20];
const resultado = somar(numeros);
console.log("A soma dos elementos do array é:", resultado);