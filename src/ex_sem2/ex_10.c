/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void checaQuadrado(int num){
	int r;
	r = sqrt(num);
	if((r*r) == num){
		printf("Eh um quadrado perfeito!");
	}else{
		printf("Nao eh um quadrado perfeito!");
	}
}


void main() {

	int n;
	scanf("%d", &n);
	checaQuadrado(n);

}
