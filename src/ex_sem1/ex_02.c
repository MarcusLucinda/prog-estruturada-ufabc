/*
 * ex_02.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Marcus
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int sony, dell, toshiba, total;

	scanf("%d", &sony);
	scanf("%d", &dell);
	scanf("%d", &toshiba);
	total = sony + dell + toshiba;
	printf("%d notebook(s) da Sony\n", sony);
	printf("%d notebooks(s) da Dell\n", dell);
	printf("%d notebook(s) da Toshiba\n", toshiba);
	printf("Total de %d notebooks\n", total);

}
