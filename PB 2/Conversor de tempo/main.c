#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num, seg, min, hora;
 printf("Escreva o numero de segundos:  ");
 scanf("%d", &num);
 hora = num / 3600;
 min = (num -(hora*3600)) /60;
 seg = (num - ((hora*3600)+(min*60)));
 printf("%d:%d:%d",hora,min,seg);
}
