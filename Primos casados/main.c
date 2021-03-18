#include <stdio.h>
#include <stdlib.h>

int eprimo(int pri){
    int i, res;
    for(i=2; i <= pri; i++){
        res = pri % i;
        if(res == 0){
            if (i == pri){
                return 1;}
            else{
                return 0;
            }
        }
    }
    if(1==pri){
        return 1;
    }
}


int main()
{
    int a;
    for(a = 1; a <= 998; a++){
    if(eprimo(a+2) == 1 && eprimo(a)== 1){
            printf("%d ----- %d \n", a, a+2);}
    }
    return 0;
}
