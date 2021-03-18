#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double h, v, ang, d, g=9.8,pi=3.1416, sin2 ;
    printf("Introduza o valor de altura(m): ");
    scanf("%lf", &h);
    printf("Introduza o valor de velocidade(m/s): ");
    scanf("%lf", &v);
    printf("Introduza o valor de angulo(graus): ");
    scanf("%lf", &ang);
    ang = (ang/180)*pi;
    d = ((v*v*sin(2*ang))/g);
    sin2 = sin(ang)*sin(ang);
    if(h <= ((v*v*sin2)/(2*g))){
        printf("O projetil bate no teto");
    }
    else{
        printf("A distancia e %f e a altura maxima atingida foi %f", d, ((v*v*sin2)/(2*g)));
    }
}
