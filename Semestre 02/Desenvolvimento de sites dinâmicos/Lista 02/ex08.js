let listaDeCompras = [];

    // Função para adicionar itens à lista
    function adicionarItem() {
      const item = prompt("Digite um item para adicionar à lista de compras:");
      if (item !== null && item !== "") {
        listaDeCompras.push(item);
        console.log(`"${item}" foi adicionado à lista.`);
      } else {
        console.log("Nenhum item foi adicionado.");
      }
    }

    // Função para exibir a lista completa
    function exibirLista() {
      if (listaDeCompras.length === 0) {
        console.log("A lista de compras está vazia.");
      } else {
        console.log("Lista de compras:");
        listaDeCompras.forEach((item, index) => {
          console.log(`${index + 1}. ${item}`);
        });
      }
    }

    // Função principal
    function main() {
      let continuar = true;

      while (continuar) {
        const opcao = prompt("Escolha uma opção:\n1. Adicionar item\n2. Exibir lista\n3. Sair");

        switch (opcao) {
          case "1":
            adicionarItem();
            break;
          case "2":
            exibirLista();
            break;
          case "3":
            continuar = false;
            break;
          default:
            console.log("Opção inválida.");
        }
      }

      console.log("Programa encerrado.");
    }

    // Iniciar o programa
    main();