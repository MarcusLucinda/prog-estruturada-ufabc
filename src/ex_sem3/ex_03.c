/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int lista[6];

	for(int i=0; i<6; i++){
		scanf("%d", &lista[i]);
	}

	int soma = (lista[0] + lista[1] + lista[5]);
	printf("A soma eh: %d\n", soma);
	lista[4] = 100;

	for(int i=0; i<6; i++){
		printf("%d\n", lista[i]);
	}

}
