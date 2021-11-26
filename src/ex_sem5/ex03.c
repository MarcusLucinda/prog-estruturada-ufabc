#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

void main(){
    struct aluno alunos[4];
    float media = 0;
    int melhor = 0;
    for(int i=0; i<4; i++){
        scanf("%d", &alunos[i].matricula);
        scanf("%s", alunos[i].nome);
        scanf("%f", &alunos[i].nota1);
        scanf("%f", &alunos[i].nota2);
        scanf("%f", &alunos[i].nota3);
        float m = ((alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3);
        if(m > media){
            media = m;
            melhor = i;
        }
    }

    printf("%d\n", alunos[melhor].matricula);
    printf("%s\n", alunos[melhor].nome);
    printf("%.1f\n", alunos[melhor].nota1);
    printf("%.1f\n", alunos[melhor].nota2);
    printf("%.1f\n", alunos[melhor].nota3);
}