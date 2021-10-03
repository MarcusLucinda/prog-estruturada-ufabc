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

	for(int i = (n-1); i > 0; i--){
		if((n % i) == 0){
			soma += i;
		}
	}

	printf("%d", soma);

}
