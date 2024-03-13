int removeElemento(lista *inicio, int valor)
{
    if (*inicio == NULL)
    {
        printf("Lista vazia...\n");
        return 0;
    }

    node *atual = *inicio;
    node *anterior = NULL;

    while (atual != NULL && atual->num != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL)
    {
        printf("Elemento não encontrado na lista...\n");
        return 0;
    }

    if (anterior == NULL)
    {
        *inicio = atual->prox;
    }
    else
    {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Elemento removido com sucesso...\n");

    return 1;
}