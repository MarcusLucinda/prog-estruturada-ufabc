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
	int lista[8];

	for(int i=0; i<8; i++){
		scanf("%d", &lista[i]);
	}
	int x, y;

	while(true){
		scanf("%d", &x);
		if(x>=0 && x<8){
			break;
		}
		printf("Valor de X invalido!\n");
	}

	while(true){
			scanf("%d", &y);
			if(y>=0 && y<8){
				break;
			}
			printf("Valor de Y invalido!\n");
		}

	int soma = (lista[x] + lista[y]);
	printf("Soma eh: %d", soma);


}
