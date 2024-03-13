int validar_data(int dia, int mes) {
        // Verifica se o dia e o mês são válidos
        if (dia < 1 || dia > 31 || mes < 1 || mes > 12){ 
        return 1;
        }
        else{
            return 0;
        }
}
        


int insere_raiz(Evento *raiz, int dia, int mes, char descricao[100]){
    no *novo = (no*) malloc(sizeof(no));
    if (novo == NULL){
        printf("erro na alocaco");
        return 0;
    }else{
        novo->esquerda = NULL;
        novo->direita = NULL;
        novo->dia = dia;
        novo->mes = mes;
         strcpy(novo->descricao, descricao);
        if(*raiz == NULL){
            *raiz = novo;
            return 1;
        }else{
            no *atual = *raiz;
            no *ant = NULL;
            while (atual != NULL){
                ant = atual;
                if (atual->dia == novo->dia && atual->mes == novo->mes){
                    printf("Elemento ja existe");
                    free(novo);
                    return 0;
                }
                if(atual->mes < novo->mes || (atual->mes == novo->mes && atual->dia < novo->dia)){
                    atual = atual->direita;
                }else{
                    atual = atual->esquerda;
                }
            }
            if(ant->mes < novo->mes || (ant->mes == novo->mes && ant->dia < novo->dia)){
                ant->direita = novo;
            }else{
                ant->esquerda = novo;
            }
            
        }
        
    }
}
