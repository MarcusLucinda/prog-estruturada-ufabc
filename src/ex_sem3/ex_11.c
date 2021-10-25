#include <stdio.h>
#include <stdlib.h>

int main(){
    char* palavra = (char*)malloc(20 * sizeof(char));
    int ver = 0;
    
    do{
        scanf("%s", palavra);
        if(palavra[8] == '\0'){
            ver = 1;
        }else{
            int cont = 0;
            for(int i=0; palavra[i]!='\0'; i++){
                cont++;
            }
            printf("Voce digitou uma string com %d caractere(s)!\n", cont);
            printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
        }
    }while(ver != 1);
    
    for(int i=0; i<4; i++){
        printf("%c", palavra[i]);
    }


}