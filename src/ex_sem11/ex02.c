#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct elemento{
    int numero;
    struct elemento *prox;
};

typedef struct elemento Elem;

typedef struct elemento* Lista;

Lista *cria_lista(){
    Lista *li;

    li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int insere_final(Lista *li, int n){
    if(li == NULL){
        return 0;
    }
    else{
        Elem *no;
        no  = (Elem*) malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }
        else{
            no->numero = n;
            no->prox = (*li);
            *li = no;
            return 1;
        }
    }
}


int main(){
    int tamL1, tamL2;
    scanf("%d", &tamL1);
    Lista *l1 = cria_lista();
    for(int i=0; i<tamL1; i++){
        int n;
        scanf("%d", &n);
        insere_final(l1, n);
    }
}