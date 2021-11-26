#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

void main(){
    struct ponto p1, p2;
    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);

    double dist;
    dist = sqrt(pow(((double)(p1.x) - (double)(p2.x)), 2) + pow(((double)(p1.y) - (double)(p2.y)), 2));
    printf("%.2f", dist);
}