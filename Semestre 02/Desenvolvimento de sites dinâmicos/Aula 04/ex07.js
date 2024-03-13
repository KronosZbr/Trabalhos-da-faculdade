function saoTodosPares(array) {
    for (let i = 0; i < array.length; i++) {
      if (typeof array[i] !== 'number' || array[i] % 2 !== 0) {
        return false;
      }
    }
    return true;
  }
  
  // Exemplos de uso:
  const array1 = [2, 4, 6, 8];
  const array2 = [1, 3, 5, 7];
  const array3 = [2, 4, 6, 7];
  
  console.log(saoTodosPares(array1)); // Output: true
  console.log(saoTodosPares(array2)); // Output: false
  console.log(saoTodosPares(array3)); // Output: false
  