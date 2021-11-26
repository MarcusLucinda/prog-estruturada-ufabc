#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

int cmpfunc(const void *p1, const void *p2){
    struct atleta *a1 = (struct atleta *)p1;
    struct atleta *a2 = (struct atleta *)p2;

    if(a1->idade > a2->idade){
        return -1;
    }
    if(a1->idade < a2->idade){
        return 1;
    }
    return 0;
}


void main(){
    struct atleta atletas[4];
    for(int i=0; i<4; i++){
        scanf("%s", atletas[i].nome);
        scanf("%d", &atletas[i].idade);
        scanf("%f", &atletas[i].altura);
    }

    qsort(atletas, 4, sizeof(struct atleta), cmpfunc);
    for(int i=0; i<4; i++){
        printf("%d ", atletas[i].idade);
    }
}