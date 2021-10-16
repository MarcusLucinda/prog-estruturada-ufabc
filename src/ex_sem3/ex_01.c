/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int lista[5];
	int soma = 0;
	for(int i=0; i<5; i++){
		scanf("%d", &lista[i]);
		soma += lista[i];
	}

	for(int i=0; i<5; i++){
		printf("%d ", lista[i]);
	}
	float media = (float)soma/5
	printf("\n%.2f", media);
}
