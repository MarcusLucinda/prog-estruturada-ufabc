/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int cod, menor, res, cont = 0;
	int a, b, c;
	scanf("%d", &cod);
	if(cod == 0){
		printf("Nenhum calculo foi realizado!");
	}else{
		while(cod != 0){
			scanf("%d", &a);
			scanf("%d", &b);
			if(cod == 1){
				res = a+b;
				printf("(a+b) = ");
			}else if(cod == 2){
				scanf("%d", &c);
				res = a+b+c;
				printf("(a+b+c) = ");
			}else if(cod == 3){
				res = a*b;
				printf("(a*b) = ");
			}
			printf("%d\n");

			if(cont == 0){
				menor = res;
				cont++;
			}else{
				if(res < menor){
					menor = res;
				}
			}
			scanf("%d", &cod);
		}

		printf("Menor resultado: %d", menor);
	}



}
