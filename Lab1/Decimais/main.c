#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    int casas;
    printf("Insira um numero: ");
    if(scanf("%lf", &num)!= 1){
       printf("Erro ao introduzir o numero \n");
       exit(0);
       }
    printf("Escreva a quantidade de casas decimais que o numero final tera: ");
    scanf("%d", &casas);
    printf("%.*f", casas, num);
    return(0);
}
