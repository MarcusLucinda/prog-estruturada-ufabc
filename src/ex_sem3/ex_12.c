#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[8];
    scanf("%s", palavra);
    int cont = 0;
    for(int i=0; palavra[i]!='\0'; i++){
        printf("%c\n", palavra[i]);
        cont++;
    }
    printf(cont);
}