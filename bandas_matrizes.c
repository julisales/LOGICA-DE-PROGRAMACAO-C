#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char bandas[3][200];
    char integrantes[3][5][200];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da banda: ");
        gets(bandas[i]);

        for (j = 0; j < 5; j++){
            
        }

    }   

    return 0;
}