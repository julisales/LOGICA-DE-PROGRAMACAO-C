#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main () {
        setlocale(LC_ALL, "portuguese");
        float n1 = 0;
        float n2 = 0;
        float m = 0;
        float p = 0;
        float so = 0;

        printf ("-----------------------------M�DIA, SOMA, PRODUTO, MAIOR E MENOR VALOR ENTRE 2 VALORES----------------------------- \n");
        printf ("Digite o primeiro valor: \n");
        scanf ("%f", &n1);
        
        printf ("Digite o segundo valor: \n");
        scanf ("%f", &n2);

        so = (n1+n2);
        m = (n1 + n2)/2;
        p = (n1*n2);

        system ("cls || clear");

        printf ("**************************************************************\n");
        printf ("* A m�dia entre %.1f e %.1f �: %.2f                            *\n", n1, n2, m);
        printf ("* A soma entre %.1f e %.1f �: %.1f                             *\n", n1, n2, so);           
        printf ("* A multiplica��o entre %.1f e %.1f �: %.1f                    *\n", n1, n2, p);
        
        
        if (n1 > n2)
        {
            printf ("*  O maior valor � %.1f e o menor valor � %.1f.\n           *", n1, n2);
        }
        else
        {
           printf ("*  O maior valor � %.1f e o menor valor � %.1f.\n            *", n2, n1);
        }
        
        return 0;
}