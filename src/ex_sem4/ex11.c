#include <stdio.h>
#include <stdlib.h>

int somatorio(int soma, int num){
    if(num == 1){
        soma += 1;
        return soma;
    }
    soma += num;
    somatorio(soma, num -1);
}

int main(){
    int soma = 0;
    int num;
    scanf("%d", &num);
    soma = somatorio(soma, num);
    printf("%d", soma);
}