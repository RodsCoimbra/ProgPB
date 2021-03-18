#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Este programa faz uma operação de dois valores a sua escolha\n");
    char simbolo;
    double result;
   double num1;
   double num2;
   int verificar = 1;
   printf("Escreva o primeiro valor: ");
   scanf("%lf", &num1);
    printf("Escolha uma das seguintes operações : +, -, /, * : ");
    scanf(" %c", &simbolo);
   printf("Agora escreva o segundo valor: ");
   scanf("%lf", &num2);
    while(verificar ==1){
    if(simbolo == '+'){
        result = num1+num2;
        break;
    }
    else if(simbolo == '-'){
        result = num1 - num2;
        break;
    }
    else if(simbolo == '/'){
        result = num1 / num2;
        break;
    }
    else if(simbolo == '*'){
        result = num1 * num2;
        break;
   }
   else{
    printf("Operação inválida. Escolha uma das seguintes operações : +, -, /, *\n");
    scanf(" %c", &simbolo);
    }

   }
    printf("O resultado e: \n\n----------  %f  --------------\n\n",result);
    return 0;
}
