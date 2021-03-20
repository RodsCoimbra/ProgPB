#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, count = 1, mark = 2;
    printf("Escreva o tamanho do triangulo:  ");
    scanf("%d", &num);
    count = 0;
    while(count++ != num){
    for(i = 1;i != mark; i++){
    printf("* ");
    }
    printf("\n");
    mark ++;
    }
    count = 0;
    mark = num;
    while(++count != num){
    for(i = 1;i != mark; i++){
    printf("* ");
    }
    mark --;
    printf("\n");
    }
}
