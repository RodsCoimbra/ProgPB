#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int idade;
    struct No* next;
} no;

void criar(no** ini,int val)
{

    no* new_node =(no*) malloc(sizeof(no));
    if(new_node == NULL)
    {
        printf("nao deu");
        exit(-1);
    }
    new_node->idade = val;
    new_node->next = NULL;
    if (*ini == NULL)
    {
        *ini = new_node;
        return;
    }
    no* curr;
    for(curr = *ini; curr->next != NULL; curr = curr->next) {}
    curr->next = new_node;
}

void apagar (no** ini)
{
    no* aux;
    while (*ini != NULL)
    {
        aux = *ini;
        *ini = (*ini)->next;
        free(aux);
    }
    *ini = NULL;
}

void inserir_inicio(no** ini, int valor)
{

    if (*ini == NULL)
    {
        criar(ini,valor);
        return;
    }
    else
    {
        no* new_node = (no*) malloc(sizeof(no));
        if(new_node == NULL)
        {
            printf("nao deu");
            exit(-1);
        }
        new_node->idade = valor;
        new_node->next = *ini;
        *ini = new_node;
    }
}

void inserir_final(no** ini, int valor)
{
    if(*ini == NULL)
    {
        criar(ini, valor);
        return;
    }
    else
    {
        no* new_node =(no*) malloc(sizeof(no));
        if(new_node == NULL)
        {
            printf("nao deu");
            exit(-1);
        }
        no* curr = *ini;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = new_node;
        new_node->idade = valor;
        new_node->next = NULL;

    }

}





int main()
{
    int x;
    no* ini = NULL;//malloc(sizeof(no));
//if (ini==NULL){
//    printf("nao deu 1");
//    return -1;}
//ini->idade = 10;
//ini->next = NULL;
    for (x=0; x<10; x++)
    {
        criar(&ini,rand()%40);
    }
    inserir_inicio(&ini, 1676);
//criar(&ini,15);
//criar(&ini,43);
    no* curr;
    inserir_final(&ini, 576);
    for (curr= ini; curr != NULL; curr = curr->next)
    {
        printf("%d\n", curr->idade);
    }
    apagar(&ini);
    inserir_final(&ini, 324);
    for (x=0; x<4; x++)
    {
        criar(&ini,rand()%5);
    }
    inserir_inicio(&ini, 232);
    for (curr= ini; curr != NULL; curr = curr->next)
    {
        printf("%d\n", curr->idade);
    }
    apagar(&ini);
    return 0;
}
