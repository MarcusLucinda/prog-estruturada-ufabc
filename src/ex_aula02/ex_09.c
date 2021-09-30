/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num1, num2;

	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num1 > num2){
		printf("O %d eh o maior numero!", num1);
	}else if(num2 > num1){
		printf("O %d eh o maior numero!", num2);
	}else{
		printf("Numeros Iguais!");
	}

}
