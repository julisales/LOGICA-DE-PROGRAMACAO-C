#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tempo, ano, codigo, idade;

    printf("Digite seu c�digo: ");
    scanf("%d", &codigo);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Digite h� quanto tempo voc� trabalha (anos): ");
    scanf("%d", &tempo);

    idade = 2023 - ano;

    system("cls || clear");

    printf("C�digo: %d \n", codigo);
    printf("Tempo de trabalho: %d \n", tempo);
    printf("Idade: %d \n", idade);
    printf("\n");

    printf("---------------------------------------------------------------\n");
    printf("SITUA��O: \n");

    if (idade >= 65 || tempo >= 30)
    {
        system("color 2");
        printf("REQUERER APOSENTADORIA!");
    }
    else
    {
        system("color 4");
        printf("N�O REQUERER APOSENTADORIA!");
    }
    
    return 0;
}