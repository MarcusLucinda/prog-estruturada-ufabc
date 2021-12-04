#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checa(int** m, int lin, int col, int v){

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            if(v == m[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

void main(){
    int lin, col, v;
    scanf("%d", &lin);
    scanf("%d", &col);
    scanf("%d", &v);

    int **m = malloc(lin * sizeof(int*));
    for(int i = 0; i < lin; i++){
        m[i] = (int*)malloc(col * sizeof(int));
    }
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("%d", checa(m, lin, col, v));
}