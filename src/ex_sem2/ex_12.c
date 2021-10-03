/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void calcula(int a, int b, char op){

	if(op == '+'){
		printf("%d", a+b);
	}else if(op == '-'){
		printf("%d", a-b);
	}else if(op == '*'){
		printf("%d", a*b);
	}else if(op == '/'){
		printf("%f", (float)a/b);
	}
}


void main() {

	int a, b;
	char op;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf(" %c", &op);
	calcula(a, b, op);

}
