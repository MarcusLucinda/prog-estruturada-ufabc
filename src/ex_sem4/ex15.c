#include <stdio.h>
#include <stdlib.h>

void multi(int x, int y, int count, int soma){
    if(count == y){
        printf("%d", soma);
        return;
    }
    soma += x;
    count++;
    multi(x, y, count, soma);
}

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    multi(x, y, 0, 0);

}

