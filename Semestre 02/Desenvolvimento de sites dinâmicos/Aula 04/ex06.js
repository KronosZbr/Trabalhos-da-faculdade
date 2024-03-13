function removerDuplicados(array) {
    const newArray = array.filter((value, index, self) => {
        return self.indexOf(value) === index;
    });

    return newArray;
}

const numeros = [1, 2, 2, 3, 4, 4, 5, 5];
const novoArray = removerDuplicados(numeros);
console.log("Array sem elementos duplicados:", novoArray);
