/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void converte(int num){
	float c;
	c = ((num - 32) * ((float)5/9));
	printf("%.2f", c);
}


void main() {

	int n;
	scanf("%d", &n);
	converte(n);

}
