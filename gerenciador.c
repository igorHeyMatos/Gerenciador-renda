#include <stdio.h>

int main()
{
    int opcao, login;
    float recebimento, pagamento;

    do
    {
        printf("Digite o codigo de usuario: ");
        scanf("%d", &login);
        if (login != 12345)
        {
            printf("Codigo incorreto!\n");
        }
    } while (login != 12345);

    printf("Login efetuado com sucesso!\n");
    printf("Carregando...\n");

    while (login == 12345)
    {
        printf("<----Selecione uma opcao---->\n");
        printf("<--1.Adicionar recebimento-->\n");
        printf("<---2.Adicionar pagamento--->\n");
        printf("<-----3.Ver recebimentos---->\n");
        printf("<-----4.Ver pagamentos------>\n");
        printf("<----------5.Sair----------->\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Adicionar recebimento: ");
            scanf("%f", &recebimento);
            printf("Recebimento adicionado!\n");
            break;
        case 2:
            printf("Adicionar pagamento: ");
            scanf("%f", &pagamento);
            printf("Pagamento adicionado!\n");
            break;
        case 3:
            printf("Recebimentos: R$ %.2f\n", recebimento);
            break;
        case 4:
            printf("Pagamentos: R$ %.2f\n", pagamento);
            break;
        case 5:
            printf("Fim de codigo!");
            return 1;
        }
    }

    return 0;
}