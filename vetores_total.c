#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int i;
    int pares = 0, impares = 0, positivos = 0, negativos = 0, contador_geral = 0, soma_pares = 0, soma_impares = 0, soma_geral = 0;
    int maior, menor;
    float media_pares = 0, media_impares = 0, media_geral = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares++;
            soma_pares += numeros[i];
        } else {
            impares++;
            soma_impares += numeros[i];
        }
        

        if (numeros[i] >= 0)
        {
            positivos++;
        } else {
            negativos++;
        }

        soma_geral += numeros[i];

        maior = numeros[0];
        menor = numeros[0];

        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;      

    }

    media_pares = (float) soma_pares / pares;
    media_impares = (float) soma_impares / impares;
    media_geral = (float) soma_geral / 5;

    system ("cls || clear");

    printf("A quantidade de n�meros pares: %d \n", pares);
    printf("A quantidade de n�meros �mpares: %d \n", impares);
    printf("A quantidade de n�meros positivos: %d \n", positivos);
    printf("A quantidade de n�meros negativos: %d \n", negativos);
    printf("A quantidade de n�meros inseridos: %d \n", contador_geral);
    printf("A m�dia de n�meros pares: %.1f \n", media_pares);
    printf("A m�dia de n�meros �mpares: %.1f \n", media_impares);
    printf("A m�dia de todos os n�meros inseridos: %.1f \n \n", media_geral);

    printf("Mostrar os n�meros lidos na ordem inversa: \n");

    for (i = 4; i >= 0; i--){
        printf("%d \n", numeros[i]);
    }

    return 0;
}