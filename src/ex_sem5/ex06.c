#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum dias {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};


void main(){
    int dia;
    scanf("%d", &dia);
    switch (dia)
    {
    case Domingo:
        printf("Domingo");
        break;
    case Segunda:
        printf("Segunda");
        break;
    case Terca:
        printf("Terca");
        break;
    case Quarta:
        printf("Quarta");
        break;
    case Quinta:
        printf("Quinta");
        break;
    case Sexta:
        printf("Sexta");
        break;
    case Sabado:
        printf("Sabado");
        break;

    
    default:
        break;
    }
}