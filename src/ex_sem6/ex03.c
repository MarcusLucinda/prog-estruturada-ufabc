#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void troca(int *pa, int *pb){
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *pa=&a, *pb=&b;
    troca(pa, pb);
    printf("%d\n", *pa);
    printf("%d", *pb);
}