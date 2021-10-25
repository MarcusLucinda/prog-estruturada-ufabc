#include <stdio.h>
#include <stdlib.h>

void printNums(int *vet, int n){
    n--;
    if(n < 0){
        return;
    }
    printf("%d\n", vet[n]);
    printNums(vet, n);
}

int main(){
    int n = 0;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    printNums(vet, n);
}