const usuario ={
    nome: "maria",
    idade: 28,
    email: "maria@example.com",
    endereco: {
        cidade: "sao paulo",
        estado: "SP",
        pais: "Brasil",
    }
} ;

const {
    nome,
    idade:age,
    email,
    endereco:{cidade,estado,pais}
}= usuario
console.log(age)
console.log(pais)