/*
 ============================================================================
 Name        : EjercicioUtnGetNumero.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int calcularMayor(int* pResultado, int n1, int n2);

int main(void) {
	setbuf(stdout, NULL);

	int resultado;
	int num1;
	int num2;

	//Pedir dos numeros al usuario con utn get number y guardarlos en num1 y num2

	utn_getNumero(&num1, "Por favor ingrese el primer número: \n", "No ingresaste un número correcto", -100, 1000, 2);
	utn_getNumero(&num2, "Por favor ingrese el primer número: \n", "No ingresaste un número correcto", -100, 1000, 2);

	//luego llamo a la funcion calcularMayor()

	if(calcularMayor(&resultado, num1, num2) == 0)
	{
		printf("Los números son iguales. \n");
	}
	else
	{
		printf("El mayor es: %d\n", resultado);
	}


	return EXIT_SUCCESS;
}


//La función debe retornar un 1 si encontró un mayor o un 0 si ambos números son iguales

int calcularMayor(int* pResultado, int n1, int n2)
{
	int retorno = 0;

	if(pResultado != NULL)
	{
		if(n1==n2)
		{
			retorno=0;
		}
		else
		{
			if(n1>n2)
			{
				*pResultado = n1;
			}
			else
			{
				*pResultado = n2;
			}

			retorno=1;
		}
	}
	return retorno;
}
