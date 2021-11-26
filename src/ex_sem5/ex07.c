#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo{
    struct Ponto p[4];
};

void main(){
    struct Retangulo ret;
    float h;
    float l;
    for(int i=0; i<4; i++){
        scanf("%f", &ret.p[i].x);
        scanf("%f", &ret.p[i].y);
    }
    h = ret.p[0].y - ret.p[1].y;
    l = ret.p[0].x - ret.p[2].x;

    double diag = sqrt(pow(h, 2) + pow(l, 2));
    printf("%.2f", diag);
}