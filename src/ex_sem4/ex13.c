#include <stdio.h>
#include <stdlib.h>

void somar(int *vet, int i, int soma){
    if(i == 4){
        printf("%d", soma);
        return;
    }
    soma += vet[i];
    i++;
    somar(vet, i, soma);
}

int main(){
    int vet[4];
    for(int i=0; i<4; i++){
        scanf("%d", &vet[i]);
    }
    somar(vet, 0, 0);
}