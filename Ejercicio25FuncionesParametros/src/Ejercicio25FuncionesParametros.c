/*
 ============================================================================
 Name        : Ejercicio25FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Confeccionar una funcion que reciba dos enteros e imprima el mayor de ellos.
 Llamar a la función desde la main cargando previamente dos valores por teclado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void imprimirMayor(int valor1, int valor2);

int main(void) {
	setbuf(stdout, NULL);

	int v1;
	int v2;

	printf("Ingrese un valor: \n");
	scanf("%d", &v1);

	printf("Ingrese otro valor: \n");
	scanf("%d", &v2);

	imprimirMayor(v1, v2);

	return EXIT_SUCCESS;
}

void imprimirMayor(int valor1, int valor2)
{
	if(valor1 > valor2)
	{
		printf("El valor mayor es %d", valor1);
	}else
	{
		printf("El valor mayor es %d", valor2);
	}
}
