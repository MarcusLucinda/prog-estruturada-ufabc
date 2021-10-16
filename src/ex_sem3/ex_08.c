/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int checa(int n, int array[], int cont){
	for(int i=0; i<cont; i++){
		if(n == array[i]){
			return 1;
		}
	}
	return 0;
}

void main() {

	int lista[6];
	int iguais[6];
	int cont = 0;

	for(int i=0; i<6; i++){
		scanf("%d", &lista[i]);
	}

	for(int i=0; i<6; i++){
		for(int j=i+1; j<6; j++){
			if(lista[i] == lista[j]){
				if((checa(lista[i], iguais, cont)) == 0){
					iguais[cont] = lista[i];
					cont++;
					printf("%d\n", lista[i]);
				}
			}
		}
	}

	if(cont == 0){
		printf("Nao existem valores iguais!");
	}

}


