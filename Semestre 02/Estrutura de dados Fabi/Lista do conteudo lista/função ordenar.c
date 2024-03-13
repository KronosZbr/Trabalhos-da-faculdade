void ordena(lista *inicio)
{
    if ((*inicio) == NULL)
    {
        printf("Lista vazia\n");
        return;
    }

    int troca;
    node *atual;
    node *proximo = NULL;

    do
    {
        troca = 0;
        atual = *inicio;

        while (atual->prox != proximo)
        {
            if (atual->num > atual->prox->num)
            {
                int temp = atual->num;
                atual->num = atual->prox->num;
                atual->prox->num = temp;
                troca = 1;
            }
            atual = atual->prox;
        }
        proximo = atual;
    } while (troca);

    printf("Lista ordenada com sucesso\n");
}