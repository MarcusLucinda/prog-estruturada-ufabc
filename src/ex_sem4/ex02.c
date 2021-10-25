
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    scanf("%d", &num);
    int mat[num][num];

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(i == j){
                mat[i][j] = 1;
            }else{
                mat[i][j] = 0;
            }
            if(j != (num - 1)){
                printf("%d ", mat[i][j]);
            }else{
                printf("%d\n", mat[i][j]);
            }
        }
    }
}