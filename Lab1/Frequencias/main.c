#include <stdio.h>
#include <stdlib.h>
#define rw 3*pow(10,9)
#define mw 3*pow(10,12)
#define il 4.3*pow(10,14)
#define vl 7.5*pow(10,14)
#define ul 3*pow(10,17)
#define xr 3*pow(10,19)
int main()
{   double freq;
    printf("Escreva o valor de uma frequencia: ");
    scanf("%lf", &freq);
    if(freq <= rw){
        printf("Essa frequencia encontra-se na classe dos ondas de radio");
    }
    else if(freq <= mw){
        printf("Essa frequencia encontra-se na classe das microondas");
    }
    else if(freq <= il){
        printf("Essa frequencia encontra-se na classe dos infravermelhos");
    }
    else if(freq <= vl){
        printf("Essa frequencia encontra-se na classe dos luz visivel");
    }
    else if(freq <= ul){
        printf("Essa frequencia encontra-se na classe dos ultravioletas");
    }
    else if(freq <= xr){
        printf("Essa frequencia encontra-se na classe dos raios-x");
    }
    else{
        printf("Essa frequencia encontra-se na classe dos raios gama");
    }
}
