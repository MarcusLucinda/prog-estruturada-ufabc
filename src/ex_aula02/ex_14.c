/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float peso, altura, imc;
	scanf("%f", &altura);
	scanf("%f", &peso);

	imc = (peso / (altura * 2));
	printf("Seu IMC eh: %f", imc);
	if(imc <= 18.5){
		printf("A Classificacao eh: Abaixo do Peso!");
	}else if(imc <= 24.9){
		printf("A Classificacao eh: Normal!");
	}else if(imc <= 29.9){
		printf("A Classificacao eh: Sobrepeso!");
	}else if(imc <= 34.9){
		printf("A Classificacao eh: Obesidade Grau I!");
	}else if(imc <= 39.9){
		printf("A Classificacao eh: Obesidade Grau II!");
	}else{
		printf("A Classificacao eh: Obesidade Grau III!");
	}
}
