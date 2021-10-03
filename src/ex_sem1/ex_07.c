/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float valor = 780.00;

	printf("Primeiro ganhador: R$%.2f \n", (valor*0.46));
	printf("Segundo ganhador: R$%.2f \n", (valor*0.32));
	printf("Terceiro ganhador: R$%.2f \n", (valor*0.22));

}
