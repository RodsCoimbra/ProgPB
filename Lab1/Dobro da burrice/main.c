#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3;
    printf("Escreva os tres valores: ");
    scanf ("%lf %lf %lf", &num1, &num2, &num3);
    printf("O parte inteira do dobro do que escreveu e: %d    %d    %d", (int) round (num1*2), (int) round(num2*2), (int) round(num3*2));

    return 0;
}
