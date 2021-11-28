#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int x = 3;
    float y = 3.4;
    char z = 'A';
    int *px = &x;
    float *py = &y;
    char *pz = &z;
    printf("ANTES:\n");
    printf("X = %i\n", *px);
    printf("Y = %.6f\n", *py);
    printf("Z = %c\n", *pz);
    scanf("%i", &(*px));
    scanf("%f", &(*py));
    scanf("%s", &(*pz));
    printf("DEPOIS:\n");
    printf("X = %i\n", *px);
    printf("Y = %.6f\n", *py);
    printf("Z = %c\n", *pz);
}