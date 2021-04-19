/*
 ============================================================================
 Name        : Ejercicio33FuncionesRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar una funci�n que defina dos par�metros enteros y nos retorne el mayor
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int retornarMayor(int v1, int v2);


int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int numeroMasGrande;

	printf("Ingrese un n�mero: \n");
	scanf("%d", &numero1);

	printf("Ingrese otro n�mero: \n");
	scanf("%d", &numero2);

	numeroMasGrande = retornarMayor(numero1, numero2);

	printf("El n�mero m�s grande es %d", numeroMasGrande);

	return EXIT_SUCCESS;
}

int retornarMayor(int v1, int v2)
{
	int mayor;
	if(v1 > v2)
	{
		mayor = v1;
	}
	else
	{
		mayor = v2;
	}

	return mayor;
}
