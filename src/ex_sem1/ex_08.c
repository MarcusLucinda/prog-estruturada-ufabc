/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main() {
	float a, b, hip;

	scanf("%f", &a);
	scanf("%f", &b);
	hip = sqrt(pow(a, 2) + pow(b, 2));
	printf("A hipotenusa eh: %f", hip);
}
