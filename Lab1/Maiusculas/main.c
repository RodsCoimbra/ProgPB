#include <stdio.h>
#include <stdlib.h>

int main()
{    int i = 0;
     char c;
     while( (c = getchar())!= '\0'){
     printf("%c", toupper(c));
     if(c == '\n'){
        break;
     }
}
}
