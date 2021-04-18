/*
 ============================================================================
 Name        : Ejercicio24FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Cargar tres nombres por teclado. Generar un cuarto string que almacene
 los tres nombres ingresados por teclado en orden alfabético separados por una
 coma.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre1[31];
	char nombre2[31];
	char nombre3[31];
	char total[93];

	printf("Ingrese un nombre: \n");
	gets(nombre1);

	printf("Intrese otro nombre: \n");
	gets(nombre2);

	printf("Ingrese otro nombre: \n");
	gets(nombre3);

	if(strcmp(nombre1,nombre2)<0 && strcmp(nombre1,nombre3)<0)
	{
		strcpy(total,nombre1);
		strcat(total, ",");

		if(strcmp(nombre2,nombre3)<0)
		{
			strcat(total,nombre2);
			strcat(total, ",");
			strcat(total, nombre3);
		}else
		{
			strcat(total,nombre3);
			strcat(total, ",");
			strcat(total, nombre2);
		}
	}
	else{
		if(strcmp(nombre2,nombre3)<0)
		{
			strcpy(total,nombre2);
			strcat(total, ",");
			if(strcmp(nombre1,nombre3)<0)
			{
				strcat(total,nombre1);
				strcat(total, ",");
				strcat(total,nombre3);
			}else
			{
				strcat(total,nombre3);
				strcat(total, ",");
			    strcat(total,nombre1);
			}
		}
		else
		{
			strcpy(total, nombre3);
			strcat(total, ",");
			if(strcmp(nombre1,nombre2)<0)
			{
				strcat(total, nombre2);
				strcat(total, ",");
				strcat(total, nombre1);
			}

		}
	}

	printf("Los nombres ordenados alfabéticamente\n");
	printf("%s", total);

	return EXIT_SUCCESS;
}
