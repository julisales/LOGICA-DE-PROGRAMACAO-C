#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int num1, num2, num3;

    printf("Digite o primeiro n�mero: ");
    scanf ("%d", &num1);
    
    printf("Digite o primeiro n�mero: ");
    scanf ("%d", &num2);
    
    printf("Digite o primeiro n�mero: ");
    scanf ("%d", &num3);

    system("cls || clear");

    printf("Primeiro n�mero: %d \n", num1);
    printf("Segundo n�mero: %d \n", num2);
    printf("Terceiro n�mero: %d \n", num3);

    printf("\n");

    // Maior
    if (num1 > num2 && num1 > num3)
    {
        printf("O n�mero maior �: %d \n", num1);
    } 
    else if (num2 > num1 && num2 > num3)
    {
        printf("O n�mero maior �: %d \n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("O n�mero maior �: %d \n", num3);
    }

    // Menor
     if (num1 < num2 && num1 < num3)
    {
        printf("O n�mero menor �: %d \n", num1);
    } 
    else if (num2 < num1 && num2 < num3)
    {
        printf("O n�mero menor �: %d \n", num2);
    }
    else if (num3 < num1 && num3 < num2)
    {
        printf("O n�mero menor �: %d \n", num3);
    }

    return 0;
} 