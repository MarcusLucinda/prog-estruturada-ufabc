#include <stdio.h>
#include <stdlib.h>

int main(){
    int lin = 0;
    int col = 0;
    scanf("%d", &lin);
    scanf("%d", &col);
    int mat[col][lin];

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &mat[j][i]);
        }
    }
    for(int i=0; i<col; i++){
        for(int j=0; j<lin; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}