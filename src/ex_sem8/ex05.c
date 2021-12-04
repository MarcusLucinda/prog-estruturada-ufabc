#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* pont(int n){
    int *p = malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    return p;
}

void main(){
    int n;
    scanf("%d", &n);
    int *p = NULL;
    p = pont(n);
    for(int i=0; i<n; i++){
        printf("%d", p[i]);
    }
}