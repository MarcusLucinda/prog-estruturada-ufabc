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

	for(int i = 0; i < n; i++){
		printf("%d ", i);
	}

	printf("%d\n", n);
	printf("%d", n);

	for(int i = (n-1); i >= 0; i--){
		printf(" %d", i);
	}
}
