#include <stdio.h>

#include <stdlib.h>

int main () {

    float nt1 = 0; 
    float nt2 = 0;
    float m = 0; 

    printf("Digite sua primeira nota: ");
    scanf("%f", &nt1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nt2);
   
    m = (nt1+nt2)/2;

    printf ("Media: %2.f", m);
    
    return 0;
}
