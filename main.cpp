#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    int b;
    int c;
    printf("Informe um valor inteiro: ");
    scanf("%i", &a);
    printf("Informe outro valor inteiro: ");
    scanf("%i", &b);
    printf("Informe mais um valor inteiro: ");
    scanf("%i", &c);
    float media = (a + b + c)/3;
    printf("A media dos tres valores informados eh: %.2f\n", media);



    return 0;
}
