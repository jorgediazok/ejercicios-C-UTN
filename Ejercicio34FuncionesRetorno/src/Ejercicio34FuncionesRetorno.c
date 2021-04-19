/*
 ============================================================================
 Name        : Ejercicio34FuncionesRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int promedio(int v1, int v2, int v3);


int main(void) {
	setbuf(stdout, NULL);

	int valor1;
	int valor2;
	int valor3;
	int promedioDeNumeros;

	printf("Ingrese un valor: \n");
	scanf("%d", &valor1);

	printf("Ingrese otro valor: \n");
	scanf("%d", &valor2);

	printf("Ingrese otro otro valor: \n");
	scanf("%d", &valor3);

	promedioDeNumeros = promedio(valor1, valor2, valor3);

	printf("El promedio de los numeros es: %d", promedioDeNumeros);


	return EXIT_SUCCESS;
}

int promedio(int v1, int v2, int v3)
{
 int promedio;

 promedio = (v1 + v2 + v3) / 3;

 return promedio;
}
