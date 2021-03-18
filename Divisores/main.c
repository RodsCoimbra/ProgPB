#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, res, soma = 1, div, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("1");
    div = 1;
    for(i=2; i<=num; i++){
        res = num % i;
        if(res==0){
        soma += i;
        printf(", %d", i);
        div ++;}
        else{}
    }
    printf("\n A media e %.3lf", (float) soma/div);
    return 0;
}
