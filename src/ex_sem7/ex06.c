#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int n;
    scanf("%d", &n);
    int *vetor = malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    int checa = 1, count = 0, maior = vetor[0];
    while(checa){
        count = 0;
        for(int i=0; i<n; i++){
            if(vetor[i] > maior){
                maior = vetor[i];
                break;
            }
            if(vetor[i] == maior){
                count++;
            }
            if(i == n-1){
                checa = 0;
            }
        }
    }
    printf("O numero %d ocorreu %d vezes.", maior, count);
}