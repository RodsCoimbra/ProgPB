#include <stdio.h>
#include <stdlib.h>

int main()
{    char c;
     printf("Escreva a frase que deseja converter: \n");
     while( (c = getchar())!= '\0'){
     printf("%c", toupper(c));
     if(c == '\n'){
        break;
     }
}
}
