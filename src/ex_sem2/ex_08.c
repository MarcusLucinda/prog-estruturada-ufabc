/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
	if (num == 0){
		return 1;
	}
	return num * fatorial(num - 1);
}


void main() {

	int n;
	float soma = 0;
	scanf("%d", &n);

	for(int i = 1; i<=n; i++){
		soma += (float)1/(fatorial(i));
	}
		printf("%f", soma);

}
