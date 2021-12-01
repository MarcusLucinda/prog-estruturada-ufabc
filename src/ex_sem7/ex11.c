#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(int *vet){
    int soma = 0;
    for(int i=0; i<5; i++){
        soma += *(vet+i);
    }
    printf("%d", soma);
}

void main(){
    int vetor[5];
    for(int i=0; i<5; i++){
        scanf("%d", &vetor[i]);
    }
    int *vet = vetor;
    funcao(vet);

}