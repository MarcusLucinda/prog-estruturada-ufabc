#include <stdio.h>
#include <stdlib.h>

int somaCubos(int soma, int num){
    if(num == 1){
        soma += 1;
        return soma;
    }
    soma += (num * num * num);
    somaCubos(soma, num -1);
}

int main(){
    int soma = 0;
    int num;
    scanf("%d", &num);
    soma = somaCubos(soma, num);
    printf("%d", soma);
}