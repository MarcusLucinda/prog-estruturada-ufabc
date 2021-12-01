#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void trocar(char *v, char *s){
    for(int i=0; i<5; i++){
        *(v+i) = *s;
    }
    for(int i=0; i<5; i++){
        printf(" %c", *(v+i));
    }
}

void main(){
    char vetor[5];
    char sub;
    for(int i=0; i<5; i++){
        scanf(" %c", &vetor[i]);
    }
    scanf(" %c", &sub);
    char *v = vetor;
    char *s = &sub;
    
    trocar(v, s);

}