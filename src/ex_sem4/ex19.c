#include <stdio.h>
#include <stdlib.h>

int main(){
    int matA[2][2];
    int matB[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matB[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", (matA[i][j] + matB[i][j]));
        }
        printf("\n");
    }
}