/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int n;
	scanf("%d", &n);
	while(n < 1){
		printf("O numero deve ser >=0!\n");
		scanf("%d", &n);
	}

	for(int i = n; i >= 0; i--){
		printf("%d  ", i);
	}

	printf("\nFIM!");

}
