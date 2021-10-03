/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {

	int n, soma = 0;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			soma ++;
			printf("%d ", soma);
		}
		printf("\n");
	}
}
