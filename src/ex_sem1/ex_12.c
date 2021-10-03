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

	if(num == 0){
		printf("Numero NEUTRO!");
	}else if((num % 2) == 0){
		printf("Numero PAR!");
	}else{
		printf("Numero IMPAR!");
	}
}
