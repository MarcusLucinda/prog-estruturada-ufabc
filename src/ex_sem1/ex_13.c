/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float l1, l2, l3;
	scanf("%f", &l1);
	scanf("%f", &l2);
	scanf("%f", &l3);

	if((l1 <= 0) || (l2 <= 0) || (l3 <= 0)){
		printf("Entrada INVALIDA!");
	}else if((l1 == l2) && (l2 == l3)){
		printf("Triangulo EQUILATERO!");
	}else if((l1 == l2) || (l2 == l3) || (l1 == l3)){
		printf("Triangulo ISOSCELES!");
	}else{
		printf("Triangulo ESCALENO!");
	}
}
