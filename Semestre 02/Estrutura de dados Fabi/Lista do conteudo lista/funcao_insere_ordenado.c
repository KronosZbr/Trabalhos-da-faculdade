int inserirOrdenado(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL)
    {
        printf("Erro na alocação");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);

        if (*inicio == NULL || novo->num < (*inicio)->num)
        {
            novo->prox = *inicio;
            *inicio = novo;
            return 1;
        }

        node *atual = *inicio;
        node *anterior = NULL;

        while (atual != NULL && novo->num > atual->num)
        {
            anterior = atual;
            atual = atual->prox;
        }

        anterior->prox = novo;
        novo->prox = atual;

        return 1;
    }
}