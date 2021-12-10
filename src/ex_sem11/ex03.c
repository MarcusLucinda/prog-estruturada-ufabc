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

int removeInicio(Lista li){
    if((li == NULL) || (li->qtd == 0)){
        return 0;
    }else{
        for(int i=0; i<li->qtd-1; i++){
            li->num[i] = li->num[i+1];
        }
        li->qtd--;
        return 1;
    }
}

int main(){
    int tamL1 = 5;
    Lista l1 = criaLista(tamL1);
    for(int i=0; i<tamL1; i++){
        int n;
        scanf("%d", &n);
        insere(l1, n);
    }
    int remove;
    scanf("%d", &remove);
    for(int i=0; i<remove; i++){
        removeInicio(l1);
    }
    for(int i=0; i<l1->qtd; i++){
        printf("%d ", l1->num[i]);
    }
}

