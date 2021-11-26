#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pessoa{
    char nome[40];
    int dia;
    int mes;
    int ano;
};

int cmpfunc(const void *p1, const void *p2){
    struct pessoa *a1 = (struct pessoa *)p1;
    struct pessoa *a2 = (struct pessoa *)p2;

    if(a1->ano < a2->ano){
        return -1;
    }
    if(a1->ano > a2->ano){
        return 1;
    }
    if(a1->mes < a2->mes){
        return -1;
    }
    if(a1->mes > a2->mes){
        return 1;
    }
    if(a1->dia < a2->dia){
        return -1;
    }
    if(a1->dia > a2->dia){
        return 1;
    }
    return 0;
}


void main(){
    struct pessoa pessoas[4];
    for(int i=0; i<4; i++){
        scanf("%s", pessoas[i].nome);
        scanf("%d", &pessoas[i].dia);
        scanf("%d", &pessoas[i].mes);
        scanf("%d", &pessoas[i].ano);
    }

    qsort(pessoas, 4, sizeof(struct pessoa), cmpfunc);
    printf("Mais novo: %s\n", pessoas[3].nome);
    printf("Mais velho: %s", pessoas[0].nome);
}