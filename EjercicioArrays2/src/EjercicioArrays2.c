/*
 ============================================================================
 Name        : EjercicioArrays2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio: Pedir el ingreso de 5 n�meros. Mostrarlos y calcular la suma de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout, NULL);

	int numeros[5];
	int acumuladorNumeros = 0;
	int i;

	for(i=0; i<5; i++)
	{
	printf("Ingrese un n�mero: \n");
	scanf("%d", &numeros[i]);
	acumuladorNumeros += numeros[i];
    }

	for(i=0; i<5; i++)
	{
	printf("Los n�meros son: %d \n", numeros[i]);
	}

	printf("El resultado de los 5 n�meros sumados es: %d", acumuladorNumeros);

	return EXIT_SUCCESS;
}
