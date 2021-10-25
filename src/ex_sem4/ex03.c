#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[4][4];
    int cont10 = 0;
    int contneg = 0;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10){
                cont10++;
            }else if(mat[i][j] < 0){
                contneg++;
            }
        }
    }
    printf("Qtd. > 10: %d\n", cont10);
    printf("Qtd. < 0: %d", contneg);
}