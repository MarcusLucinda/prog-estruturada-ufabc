#include <stdio.h>
#include <stdlib.h>

int checaSup(int mat[4][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if((i>j) && (mat[i][j] != 0)){
                return 0;
            }
        }
    }
    return 1;
}

int checaInf(int mat[4][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if((j>i) && (mat[i][j] != 0)){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int mat[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int sup = checaSup(mat);
    int inf = checaInf(mat);

    if(sup == 1 && inf ==1){
        printf("Matriz Diagonal!!!");
    }else if(sup == 1){
        printf("Matriz Triangular Superior!!!");
    }else if(inf == 1){
        printf("Matriz Triangular Inferior!!!");
    }else{
        printf("Nao se Enquadra!!!");
    }

}