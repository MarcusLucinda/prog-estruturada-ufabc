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
	float soma = 1;
	printf("%f", soma);

	if(n == 1){
		printf(1);
	}else{
		for(int i = 2; i<=n; i++){
			soma += (float)1/i;
		}
		printf("%f", soma);
	}

}
