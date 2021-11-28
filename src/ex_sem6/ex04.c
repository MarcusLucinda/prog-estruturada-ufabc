#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void checa(int *pa, int *pb){
    if(*pa >= *pb){
        return;
    }
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *pa=&a, *pb=&b;
    checa(pa, pb);
    printf("%d\n", *pa);
    printf("%d", *pb);
}