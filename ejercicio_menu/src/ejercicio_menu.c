/*
 ============================================================================
 Name        : ejercicio_menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hacer una funci�n que calcule el promedio de los valores del
 array que recibe y me devuelva el promedio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;

	do
	{
	  respuesta = utn_getNumero(&opcion, "Seleccione una opci�n\n\n1-Leer\n2-Mostrar\n3-Salir\n\n", "No es una opci�n v�lida\n", 1,3,2);

	  if(respuesta == 0)
      {
		switch(opcion)
		{
		case 1:
		printf("Entre al caso1\n");
		break;

		case 2:
		printf("Entre al caso2\n");
		break;


		case 3:
		printf("Sali� de la aplicaci�n. Hasta la pr�xima.\n");
		break;
		}
      }
	} while(opcion != 3);


	return EXIT_SUCCESS;
}
