#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf ("Digite um n�mero para saber se � um dia �til: ");
    scanf ("%d", &dia);

    system ("cls || clear");

    switch (dia)
    {

    case 1 :
        printf("O n�mero digitado foi %d e correponde a Segunda. \n", dia);
        printf ("� um dia �til.");
        break;
        
    case 2 :
        printf("O n�mero digitado foi %d e corresponde a Ter�a. \n", dia);
        printf ("� um dia �til.");
        break;
        
    case 3 :
        printf("O n�mero digitado foi %d e corresponde a Quarta. \n", dia);
        printf ("� um dia �til.");
        break;
        
    case 4 :
        printf("O n�mero digitado foi %d e corresponde a Quinta. \n", dia);
        printf ("� um dia �til.");
        break;
        
    case 5 :
        printf("O n�mero digitado foi %d e corresponde a Sexta. \n", dia);
        printf ("� um dia �til.");
        break;
        
    case 6 :
        printf("O n�mero digitado foi %d e corresponde a S�bado. \n", dia);
        printf ("� final de semana.");
        break;
        
    case 7 :
        printf("O n�mero digitado foi %d e corresponde a Domingo. \n", dia);
        printf ("� final de semana.");
        break;
        
    default:
        printf ("Op��o inv�lida!");
        break;
    }
    
    return 0;
}