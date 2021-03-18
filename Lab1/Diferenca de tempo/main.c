#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s,h2,m2,s2;
    printf("Escreva o maior dos tempos(no formato:hora min seg) : ");
    scanf("%d %d %d", &h, &m , &s);
    printf("Escreva o tempo que pretende subtrair: ");
    scanf("%d %d %d", &h2, &m2 , &s2);
    if((0 > h || h > 23) || (0 > h2 || h2 > 23) || (0 > m || m > 59) || (0 > m2 || m2 > 59) || (0 > s || s > 59) || (0 > s2 || s2 > 59)){
    //Erro porque os tempos estão fora dos padrões
        printf("Erro!! Tempos invalidos.");

    }
    else if (h2 > h || (h2 == h && m2 > m)||(h2 == h && m2 == m && s2 > s)){
        //Erro porque os segundo tempo é maior que o primeiro
        printf("Erro!! Segundo tempo maior que o primeiro.");
    }
    else{
        if(s2 > s){
            // Caso em que os segundos do primeiro tempo são menores que os do segundo tempo, logo tira 1 minuto da primeira e transforma em 60 segundos
            s+= 60;
            m-= 1;
        }
        if (m2 > m){
            // Caso em que os minutos do primeiro tempo são menores que os  do segundo tempo, logo tira 1 hora da primeira e transforma em 60 minutos
            m += 60;
            h -= 1;
        }

        printf("A diferenca entre os tempos e %d:%d:%d", h-h2, m-m2, s - s2);
    }
 return 0;
}
