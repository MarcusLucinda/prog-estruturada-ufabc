#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    char s[50];
    scanf("%s", s);
    char *p = s;
    int count = 0;
    for(int i=0; i<50; i++){
        if(*(p+i) != '\000'){
            count++;
        }else{
            break;
        }
    }
    printf("%d", count);

}