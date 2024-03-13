function caclmedia(nome, nota1, nota2, nota3) {
    const media = (nota1 + nota2 + nota3) / 3;
    return `O aluno ${nome} obteve as notas ${nota1}, ${nota2} e ${nota3}, com média ${media.toFixed(2)}.`;
}

const nomeAluno = "thomas";
const nota1 = 8.5;
const nota2 = 7.9;
const nota3 = 6.3;

const mensagem = caclmedia(nomeAluno, nota1, nota2, nota3);
console.log(mensagem);