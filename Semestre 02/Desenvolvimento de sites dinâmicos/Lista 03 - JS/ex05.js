function maior(array) {
    let receba = 0
    let maior = 0;
    for (let i = 0; i < array.length; i++) {
        if(array[i]>receba){
            receba = array[i]
            maior = receba
        }
    }
    return maior;
}

const numero = [50, 10, 15, 20];
const resultado = maior(numero);
console.log("O maior é:", resultado);