/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

	int a[5];
	int b[5];
	int c[5];

	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}

	for(int i=0; i<5; i++){
		scanf("%d", &b[i]);
	}

	for(int i=0; i<5; i++){
		c[i] = (a[i] - b[i]);
		printf("%d ", c[i]);
	}


}
