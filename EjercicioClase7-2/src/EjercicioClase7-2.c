/*
 ============================================================================
 Name        : EjercicioClase7-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Crear un programa que permita registrar el valor de temperatura m�xima de cada d�a de un mes.
 Definir un array de floats de 31 posiciones. Cada posici�n corresponder� a un d�a del mes.
 Hacer un programa con un men� de dos opciones. Imprimir Array y 2. Cargar Array. Al elegir
 la opcion 1, se imprimira el indice y el valor de cada posici�n del array. Al elegir la opcion 2
 que le pida al usuario que ingrese un numero de dia (1 a 31). y luego que ingrese un valor de tempreatura.
 Almacenar el valor en el inidice correspondiente . Ambas opciones deben volver al menu principal. Utilizar la funcion
 utn get numero float de la biblioteca utn.h
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 31

int main(void) {
	setbuf(stdout, NULL);

	float temperaturasDias[LEN];
	int opcionesMenu;
	int i;
	int dia;
	float temp;

	do
	{
		printf("Menu de opciones\n"
				"1 - Imprimir Array\n"
				"2 - Cargar Array\n"
				"3 - Salir\n");

		if(utn_getNumero(&opcionesMenu, "Ingrese la opci�n deseada: ", "ERROR - Opci�n no v�lida\n", 0, 3, 2 ) == 0)
		{
			switch(opcionesMenu)
			{
			case 1:
				for(i=0; i<LEN; i++)
				{
					printf("D�a %d  --  Valor: %.2f\n", i+1, temperaturasDias[i]);
				}
				break;
			case 2:
				if(utn_getNumero(&dia, "Ingrese d�a[1-31]: ", "ERROR - D�a no v�lido", 1, 31, 2) == 0)
				{
					if(utn_getNumeroFlotante(&temp, "Ingrese la temperatura: ", "ERROR, temperatura inv�lida\n", 0, 100, 2) == 0)
					{
						//Cargar la temperatura en el array en la posici�n que corresponde
						temperaturasDias[dia-1]=temp;
					}
				}
				break;
			}
		}
		else
		{
			printf("Game over. Se acabaron tus intentos");
		}
	}while(opcionesMenu != 3);

	return EXIT_SUCCESS;
}
