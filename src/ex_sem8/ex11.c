#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* monta(int* a, int* b, int n){
    int *c = malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        c[i] = a[i] + b[i];
    }
    return c;
}

void main(){
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    int *b = malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    int *c = monta(a, b, n);
    for(int i=0; i<n; i++){
        printf("%d ", c[i]);
    }

}