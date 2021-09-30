/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float baseA, alturaA, baseB, alturaB, areaA, areaB;

	scanf("%f", &baseA);
	scanf("%f", &alturaA);
	scanf("%f", &baseB);
	scanf("%f", &alturaB);
	if((baseA == alturaA) || (baseB == alturaB)){
		printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
	}else{
		areaA = (baseA * alturaA);
		areaB = (baseB * alturaB);
		printf("A area do retangulo A eh: %f \n", areaA);
		printf("A area do retangulo B eh: %f \n", areaB);

		if(areaA > areaB){
			printf("A area do retangulo A eh maior do que a do retangulo B!");
		}else if(areaA < areaB){
			printf("A area do retangulo B eh maior do que a do retangulo A!");
		}else{
			printf("A area do retangulo A eh igual ao do retangulo B!");
		}
	}

}
