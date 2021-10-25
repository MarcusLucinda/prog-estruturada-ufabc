#include <stdio.h>
#include <stdlib.h>

int pot(int x, int y, int count, int valor){
    if(count == y){
        return valor;
    }
    valor = valor * x;
    count++;
    pot(x, y, count, valor);
}

int main(){
    int x, y, valor;
    scanf("%d", &x);
    scanf("%d", &y);
    valor = pot(x, y, 1, x);
    printf("%d", valor);
}

