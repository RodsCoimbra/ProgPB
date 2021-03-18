#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double v, ang, d, g=9.8,pi=3.1416, c , ang1 = pi/2, ang2 = 0, min, max;
    printf("Introduza o valor de velocidade(m/s): ");
    scanf("%lf", &v);
    printf("Introduza o valor de distancia(metro): ");
    scanf("%lf", &d);
    printf("Introduza diametro do cesto(metro):  ");
    scanf("%lf", &c);
    c = c/2;
    min = d - c;
    if(min < 0){
        printf("Erro! O raio do cesto e maior que a distancia ao cesto. \n");
        return(0);

    }
    max = d + c;
    while (min <= max){
        ang = ((asin((g*min)/(v*v))))/2;
        if(ang > ang2){
            ang2 = ang;
        }
        if (ang < ang1){
            ang1 = ang;
        }
        min += 0.05;}
        ang1 = (ang1*180)/pi;
        ang2 = (ang2*180)/pi;
    if(round(ang1) >= 90 && round(ang2) <= 0){
            printf("A bola nunca entra no cesto.");
    }
    else{
        printf("O angulo esta entre %.3f a %.3f e de %.3f a %.3f.", ang1, ang2, 90-ang2, 90- ang1);
        }

}
