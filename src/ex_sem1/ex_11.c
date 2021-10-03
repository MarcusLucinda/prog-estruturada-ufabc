/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, a, b;
	scanf("%d", &num);

	if((num > 4) || (num < 1)){
		printf("Numero Invalido!");
	}else{
		switch(num){
		case 1:
			printf("%d", (a + b));
			break;

		case 2:
			printf("%d", (a - b));
			break;

		case 3:
			{double div = (a / b);
			printf("%lf", div);
			break;}

		case 4:
			printf("%d", (a * b));
			break;

		}
	}
}
