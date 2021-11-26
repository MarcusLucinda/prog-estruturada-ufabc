#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct horario{
    int horas;
    int minutos;
};

void main(){
    struct horario tempo1;
    struct horario tempo2;
    scanf("%d", &tempo1.horas);
    scanf("%d", &tempo1.minutos);
    scanf("%d", &tempo2.horas);
    scanf("%d", &tempo2.minutos);

    int diferenca = (tempo2.horas*60 + tempo2.minutos) - (tempo1.horas*60 + tempo1.minutos);
    int horas = diferenca/60;
    int minutos = diferenca - (horas*60);
    printf("%d hora(s) e %d minuto(s) de diferenca", horas, minutos);
}