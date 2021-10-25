
#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];
    int maior, menor;
    int posMaior[2] = {0, 0}, posMenor[2] = {0, 0};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    maior = mat[0][0];
    menor = mat[0][0];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                posMaior[0] = i;
                posMaior[1] = j;
            }else if(mat[i][j] < menor){
                menor = mat[i][j];
                posMenor[0] = i;
                posMenor[1] = j;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao (maior): %d linha e %d coluna\n", posMaior[0], posMaior[1]);
    printf("Menor: %d\n", menor);
    printf("Posicao (menor): %d linha e %d coluna", posMenor[0], posMenor[1]);
}