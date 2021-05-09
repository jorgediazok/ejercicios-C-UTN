/*
 ============================================================================
 Name        : EjercicioClase7-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Completar la funcion getfloat() para que devuelva un numero float ingresado por el usuario
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFloat(float* pResultado);
int isFloat(char stringRecibido[]);

int main(void) {
	setbuf(stdout, NULL);

	float precio;

	printf("Ingrese un precio: \n");

	if(getFloat(&precio)==1)
	{
		printf("El precio es válido: %f", precio);
	}
	else
	{
		printf("Valor incorrecto");
	}
	return EXIT_SUCCESS;
}

int getFloat(float* pResultado)
{
	int retorno = 0;
	char buffer[128];

	fgets(buffer,sizeof(buffer),stdin);
	buffer[strlen(buffer) - 1] = '\0'; //borro el enter

	if(isFloat(buffer)==1)
	{
		*pResultado = atof(buffer);
		retorno = 1;
	}

	return retorno;
}

int isFloat(char stringRecibido[])
{
	int retorno = 1;
	int i;
	int contadorPuntos = 0;

	for(i=0;stringRecibido[i]!='\0'; i++)
	{
		if(stringRecibido[i]<'0' || stringRecibido[i]>'9')
		{
			//no estoy en el rango de los números

			if(stringRecibido[i]=='.') //es un punto
  			{
				contadorPuntos++;
				if(contadorPuntos>1)
				{
					//encontré un segundo punto, doy error
					retorno=0;
					break;
				}
			}
			else
			{
				//Hay algo que no es ni un punto ni un número
				if(i==0)
				{
					//me pongo a ver qué onda con el caracter
					if(stringRecibido[i]!='+' && stringRecibido[i]!='-')
					{
						retorno=0;
						break;
					}
				}
				else
				{
					retorno=0;
					break;
				}
			}
		}
	}

	return retorno;
}
