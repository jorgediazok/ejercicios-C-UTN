/*
 ============================================================================
 Name        : Ejercicio30FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta
 dicho valor. Si la función recibe un valor negativo mostrar un mensaje de error.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarHasta(int valor);


int main(void) {
	setbuf(stdout, NULL);

	mostrarHasta(20);

	return EXIT_SUCCESS;
}

void mostrarHasta(int valor)
{
   if(valor < 0)
   {
	   printf("Error.");
   }
   else
   {
	   int i;
	   for(i=0; i<=valor; i++)
	   {
		   printf("%d -",i);
	   }
   }
}

