/*
 ============================================================================
 Name        : Ejercicio29FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos. La carga de los
 valores hacerlo por teclado en la función main.
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

void mayor(int v1, int v2, int v3);

int main(void) {
	setbuf(stdout, NULL);
	int valor1;
	int valor2;
	int valor3;

	printf("Ingrese el primer valor: \n");
	scanf("%d", &valor1);

	printf("Ingrese el segundo valor: \n");
	scanf("%d", &valor2);

	printf("Ingrese el tercer valor: \n");
	scanf("%d", &valor3);

	mayor(valor1, valor2, valor3);

	return EXIT_SUCCESS;
}

void mayor(int v1, int v2, int v3)
{
	printf("Mayor: \n");

	if(v1 > v2 && v1 > v3)
	{
		printf("%d", v1);
	}
	else
	{
		if(v2 > v3)
		{
			printf("%d", v2);
		}
		else
		{
			printf("%d", v3);
		}
	}
}
