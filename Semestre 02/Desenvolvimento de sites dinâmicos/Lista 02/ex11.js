var conta = {
    total: 0, // Inicializa a propriedade total com o valor 0
  
    deposito: function(dep) {
        this.total += dep; // Usa this.total para acessar a propriedade do objeto
        return this.total; // Retorna o valor atualizado de total
    },
  
    saque: function(sac) {
        if (this.total >= sac) {
            this.total -= sac; // Usa this.total para acessar a propriedade do objeto
            return this.total; // Retorna o valor atualizado de total
        } else {
            console.log("ERRO, o valor do saque é maior que o saldo");
            return false; // Retorna false para indicar que o saque não foi realizado
        }
    }
};

var i = 1;
var total;

while (i > 0) {
    i = prompt("O que você quer fazer? 1 - depositar | 2 - Sacar | 0 - finalizar");

    if (i == 1) {
        var dep = Number(prompt("Digite um valor para depositar"));
        total = conta.deposito(dep);
        console.log("Você depositou: " + dep);
        console.log("Saldo atual: " + total);
    } else if (i == 2) {
        var sac = Number(prompt("Digite um valor para sacar:"));
        var saqueRealizado = conta.saque(sac);
        if (saqueRealizado !== false) {
            console.log("Você sacou: " + sac);
            console.log("Saldo atual: " + saqueRealizado);
        }
    } else if (i == 0) {
        break;
    }
}