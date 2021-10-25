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

	int lista[10];
	int n;

	scanf("%d", &lista[0]);

	for(int i=1; i<10; i++){
		scanf("%d", &n);
		while(checa(n, lista, i)){
			printf("Numero já digitado! Digite outro numero!");
			scanf("%d", &n);
		}
			lista[i] = n;
	}

	for(int i=0; i<10; i++){
		printf("%d\n", lista[i]);
	}

}


