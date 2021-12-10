#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct lista{
    int qtd;
    int tamanho;
    int *num;
};
typedef struct lista* Lista;

Lista criaLista(int tamanho){
    Lista li = (Lista*)malloc(sizeof(Lista));
    li->tamanho = tamanho;
    li->num = malloc(tamanho * sizeof(int));
    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}

int insere(Lista li, int n){
    if((li == NULL) || (li->qtd == li->tamanho)){
        return 0;
    }else{
        li->num[li->qtd] = n;
        li->qtd++;
        return 1;
    }
}

int main(){
    int tamL1, tamL2;
    scanf("%d", &tamL1);
    Lista l1 = criaLista(tamL1);
    for(int i=0; i<tamL1; i++){
        int n;
        scanf("%d", &n);
        insere(l1, n);
    }
    scanf("%d", &tamL2);
    Lista l2 = criaLista(tamL2);
    for(int i=0; i<tamL2; i++){
        int n;
        scanf("%d", &n);
        insere(l2, n);
    }
    int tamL3 = tamL1 + tamL2;
    Lista l3 = criaLista(tamL3);
    for(int i=0; i<tamL1; i++){
        insere(l3, l1->num[i]);
    }
    for(int i=0; i<tamL2; i++){
        insere(l3, l2->num[i]);
    }
    for(int i=0; i<tamL3; i++){
        printf("%d ", l3->num[i]);
    }
}