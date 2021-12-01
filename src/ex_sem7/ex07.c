#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(float *vet, int n){
    int neg = 0;
    for(int i=0; i<n; i++){
        if(vet[i] < 0){
            neg++;
        }
    }
    return neg;
}

void main(){
    int n;
    scanf("%d", &n);
    float *vetor = malloc(n * sizeof(float));
    for(int i=0; i<n; i++){
        scanf("%f", &vetor[i]);
    }
    int neg = funcao(vetor, n);
    printf("%d", neg);
}