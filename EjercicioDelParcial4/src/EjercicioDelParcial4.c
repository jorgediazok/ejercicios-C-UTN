/*
 ============================================================================
 Name        : EjercicioDelParcial4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i =1;
	int j =2;

	switch(j)
	{
	case 0:
		i++;
	case 1:
		j--;
		break;
	case 2:
		i++;
	case 3:
		i=i*i;
		break;
	}

	printf("%d - %d", i, j);
	return EXIT_SUCCESS;
}
