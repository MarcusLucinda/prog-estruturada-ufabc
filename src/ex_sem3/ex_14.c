#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[8];
    char letra;
    scanf("%s", palavra);
    letra = getchar();
    int cont = 0;
    for(int i=0; palavra[i]!='\0'; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ){
            cont++;
            palavra[i] = letra;
        }   
    }
    printf("A string possui %d vogais.\n", cont);
    printf("%s", palavra);
    int j;
    scanf("%d", j);
}