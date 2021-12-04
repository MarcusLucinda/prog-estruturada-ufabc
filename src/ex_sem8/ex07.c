#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int** montar(int n){
    int **m = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        m[i] = (int*)malloc(n * sizeof(int));
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    return m;
}

void main(){
    int n;
    scanf("%d", &n);

    int **m = montar(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
}