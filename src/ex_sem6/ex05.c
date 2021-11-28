#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(int *pa, int *pb){
    *pa += *pb;
}

void main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *pa=&a, *pb=&b;
    soma(pa, pb);
    printf("%d\n", *pa);
    printf("%d", *pb);
}