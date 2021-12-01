#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculo(float r, float *area, float *volume){
    float a = 4 * 3.14 * pow(r, 2);
    float v = (4 * 3.14 * pow(r, 3)) / 3;
    *area = a;
    *volume = v;
}

void main(){
    float raio;
    scanf("%f", &raio);
    float *area, *volume;
    area = malloc(sizeof(float));
    calculo(raio, area, volume);
    printf("Area: %.2f\n", *area);
    printf("Volume: %.2f", *volume);
}