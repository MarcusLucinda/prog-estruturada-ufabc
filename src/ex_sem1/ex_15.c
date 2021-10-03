/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int ano;
	scanf("%d", &ano);

	if(((ano % 4 == 0) && (ano % 100 != 0)) || ((ano % 4 == 0) && (ano % 4 == 0) && (ano % 400 == 0))){
		printf("Eh Ano Bissexto!");
	}else{
		printf("Nao Eh Ano Bissexto!");
	}
}
