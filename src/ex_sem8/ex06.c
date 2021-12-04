#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* pont(int n){
    if(n < 1){
        return NULL;
    }else{
        return malloc(n * sizeof(int));
    }
    
}

void main(){
    int n;
    scanf("%d", &n);
    int *p = pont(n);
    if(p == NULL){
        printf("Ponteiro NULL.");
    }else{
        printf("Ponteiro NAO NULL.");
    }
}