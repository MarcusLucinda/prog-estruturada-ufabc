#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(float *vet, int n){
    float soma = 0;
    for(int i=0; i<n; i++){
        soma += vet[i];
    }
    float media = (soma / n);
    printf("%.6f", media);
}

void main(){
    int n;
    scanf("%d", &n);
    float *vetor = malloc(n * sizeof(float));
    for(int i=0; i<n; i++){
        scanf("%f", &vetor[i]);
    }
    funcao(vetor, n);

}