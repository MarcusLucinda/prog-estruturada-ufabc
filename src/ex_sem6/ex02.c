#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int x=2, y=5;
    int *px=&x, *py=&y;
    if(px>py){
        printf("A");
    }else{
        printf("B");
    }
}