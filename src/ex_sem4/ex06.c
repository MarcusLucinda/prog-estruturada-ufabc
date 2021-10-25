#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];
    int somas[3] = {0, 0, 0};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            somas[i] += mat[j][i];
        }
    }
    printf("%d %d %d", somas[0], somas[1], somas[2]);
}