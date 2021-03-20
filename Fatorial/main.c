#include <stdio.h>
#include <stdlib.h>

float fatorial(float i)
{

   return i;
}


int main()
{
    float i, d=1;

    printf("Escreva um numero: ");
    scanf("%f", &i);
    for(i; i>0; i--)
   {
       d*=i;
   }

    printf("O fatorial desse numero e %.0f", d);
    return 0;
}
