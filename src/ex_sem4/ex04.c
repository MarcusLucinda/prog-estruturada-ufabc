#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];
    int principal = 0;
    int secundaria = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
            if(i == j){
                principal += mat[i][j];
            }if((i+j) == 2){
                secundaria += mat[i][j];
            }
        }
    }
    printf("Soma diagonal principal: %d\n", principal);
    printf("Soma diagonal secundaria: %d", secundaria);
}