#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
};

void main(){
    struct pessoa p;
    scanf("%s", p.nome);
    scanf("%d", &p.idade);
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d", p.idade);
}