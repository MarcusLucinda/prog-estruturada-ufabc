#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void perimetro(float *pa, float *pb){
    float per = (2 * *pa) + (2 * *pb);
    printf("%.6f", per);
}

void area(float *pa, float *pb){
    float area = (*pa * *pb);
    printf("%.6f\n", area);
    perimetro(pa, pb);
}

void main(){
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    float *pa=&a, *pb=&b;
    area(pa, pb);
}