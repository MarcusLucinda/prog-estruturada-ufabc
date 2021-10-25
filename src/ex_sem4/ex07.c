#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[4][4];
    int principal = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
            if(i > j){
                principal += mat[i][j];
            }
        }
    }
    printf("Soma: %d\n", principal);
}