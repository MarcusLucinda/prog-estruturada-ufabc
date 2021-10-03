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

	for(int i = 1; i < n; (i+=2)){
		printf("%d  ", i);
	}

	printf("\n");

	for(int i = 0; i <= n; (i+=2)){
			printf("%d  ", i);
	}
}
