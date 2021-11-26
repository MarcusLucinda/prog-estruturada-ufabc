#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum meses {Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

void main(){
    int mes;
    scanf("%d", &mes);

    switch(mes){

    case Janeiro:
        printf("Janeiro - 31 dias.");
        break;
    
    case Fevereiro:
        printf("Fevereiro - 28 dias");
        break;
    
    case Marco:
        printf("Marco - 31 dias");
        break;
    
    case Abril:
        printf("Abril - 30 dias");
        break;
    
    case Maio:
        printf("Maio - 31 dias");
        break;
    
    case Junho:
        printf("Junho - 30 dias");
        break;
    
    case Julho:
        printf("Julho - 31 dias");
        break;
    
    case Agosto:
        printf("Agosto - 31 dias");
        break;
    
    case Setembro:
        printf("Setembro - 30 dias");
        break;
    
    case Outubro:
        printf("Outubro - 31 dias");
        break;
    
    case Novembro:
        printf("Novembro - 30 dias");
        break;
    
    case Dezembro:
        printf("Dezembro - 31 dias");
        break;
    }
}