#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float valor, desconto, total, valor_parcelado;
    int pagamento, parcelas;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Forma de pagamento \n");
    printf("1- Pagamento � vista \n");
    printf("2- Pagamento � prazo \n");

    printf("Escolha forma de pagamento: ");
    scanf("%d", &pagamento);

    system ("cls || clear");

    switch (pagamento)
    {
    case 1:
        desconto = valor * 0.1;
        total = valor - desconto;

        printf("Forma de pagamento: � vista \n");
        printf("Valor do produto: %.2f \n", valor);
        printf("Valor do desconto: %.2f \n", desconto);
        printf("Total a pagar: %.2f \n", total);

        break;

    case 2:
        printf("Digite a quantidade de parcelas que deseja pagar: ");
        scanf("%d", &parcelas);

        if (parcelas > 6)
        {
            printf("N�mero de parcelas acima do permitido!");
        }
        else
        {
            valor_parcelado = valor / parcelas;

            printf("Forma de pagamento: � prazo \n");
            printf("N�mero de parcelas: %d \n", parcelas);
            printf("Valor por parcelas: %.2f \n", valor_parcelado);
            printf("Total � prazo: %.2f \n", valor);
        }
        break;

    default:
        printf ("Op��o Inv�lida!");
        break;
    }

    return 0;
}