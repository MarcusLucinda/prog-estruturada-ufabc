/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;
	scanf("%d", &num);

	if((num > 7) || (num < 1)){
		printf("Numero Invalido!");
	}else{
		switch(num){
		case 1:
			printf("Domingo");
			break;

		case 2:
			printf("Segunda-Feira!");
			break;

		case 3:
			printf("Terça-Feira!");
			break;

		case 4:
			printf("Quarta-Feira!");
			break;

		case 5:
			printf("Quinta-Feira!");
			break;

		case 6:
			printf("Sexta-Feira!");
			break;

		case 7:
			printf("Sábado!");
			break;
		}
	}
}
