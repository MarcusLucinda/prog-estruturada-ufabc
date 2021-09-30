/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int alunos, alunas;

	scanf("%d", &alunos);
	scanf("%d", &alunas);
	if(alunos > alunas){
		printf("Quantidade de alunos eh maior do que de alunas!");
	}else if(alunas > alunos){
		printf("Quantidade de alunas eh maior do que de alunos!");
	}else{
		printf("Mesma quantidade!");
	}

}
