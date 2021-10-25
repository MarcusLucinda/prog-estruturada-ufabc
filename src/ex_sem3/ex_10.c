#include <stdio.h>
#include <stdlib.h>

int sort(const void * n1, const void * n2){
    float f = *((float*)n1);
    float s = *((float*)n2);
    if(f > s){
        return  1;
    }
    if(f < s){
        return -1;
    }
    return 0;
}

int main(){
    float lista[10];

    for(int i=0; i<10; i++){
        scanf("%f", &lista[i]);
    }

    qsort(lista, sizeof(lista)/sizeof(*lista), sizeof(*lista), sort);

    for (int i = 0 ; i < 10 ; i++)
        printf ("%f\n", lista[i]);
}