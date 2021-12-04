#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int tam;
    scanf("%d", &tam);
    while(tam < 0){
        printf("Numero deve ser POSITIVO! Digite um numero VALIDO!");
        scanf("%d", &tam);
    }
    int *vet = malloc(tam * sizeof(int));
    for(int i=0; i<tam; i++){
        scanf("%d", &vet[i]);
        while(vet[i] < 2){
            printf("Digite um numero >=2!");
            scanf("%d", &vet[i]);
        }
    }
    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    free(vet);
}