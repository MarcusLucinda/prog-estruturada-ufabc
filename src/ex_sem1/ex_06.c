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

	printf("Antecessor de %d eh: %d \n", num, (num-1));
	printf("Sucessor de %d eh: %d", num, (num+1));
}
