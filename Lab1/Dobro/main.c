#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3;
    printf("Escreva os tres valores: ");
    scanf ("%lf %lf %lf", &num1, &num2, &num3);
    num1*= 100;
    num2*= 10;
    num1+= num2 + num3;
    printf("O dobro do que escreveu e: %d", (int) round (num1*2));

    return 0;
}
