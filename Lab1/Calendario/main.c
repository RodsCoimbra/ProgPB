#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;


do{printf("Digite um numero entre 1-12 correspondente ao mes do ano: ");
    scanf("%d", &mes);
    switch(mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("Esse mes tem 31 dias.\n");
        break;
        case 2:
        printf("Esse mes tem 29 dias\n");
        break;
        case 4:case 6:case 9:case 11:
        printf("Esse mes tem 30 dias\n");
        break;
        default:
            printf("Invalido");
            }
}while(1<=mes && 12>=mes);
}
