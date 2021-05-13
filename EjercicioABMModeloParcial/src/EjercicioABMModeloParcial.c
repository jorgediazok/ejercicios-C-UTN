/*
 ============================================================================
 Name        : EjercicioABMModeloParcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define QTY_PANTALLAS 3
#define LCD 1
#define LED 2

typedef struct
{
	char calle[20];
	int numero;
	char localidad[20];
	char provincia[20];
}Domicilio;


typedef struct{
	int idPantalla;
	char tipo;
	char nombre[20];
	Domicilio direccion;
	float precio;
	int isEmpty;
}Pantalla;

typedef struct{
	int idPublicidad;
	int idPantalla;
	int cuit;
	int dias;
	char archivo;
	char contratacion;
}Publicidad;

typedef struct{
	int codigo;
	char descripcion;
}Tipo;


//Para cada pantalla puedo etner muchas publicidades y cada publicidad puede tener solo una, entonces
//pantalla(1,n)
//publicidades(1,1)
//relacion(n,1)
//Entonces me tengo que llevar el idPantalla del lado de publicidad

int initArraysPantalla(Pantalla array[], int len); //Inicializar Arrays
int buscarLibre(Pantalla array[], int len, int* posicion); //Buscar array libre



int main(void) {
	setbuf(stdout, NULL);

	Pantalla arrayPantallas[QTY_PANTALLAS];

	int opcion = 0;
	int respuesta;
	int posicion;

	int auxIdPantalla = 0;
	char auxTipo[51];
	char auxNombre[51];
	char auxDireccion[51];
	float auxPrecio = 0;
	int auxSector = 0;

	initArraysPantalla(arrayPantallas, QTY_PANTALLAS);

	do
		{
		respuesta = utn_getNumero(&opcion, "\n\nMENU PANTALLAS\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJA\n4 - CONTRATAR UNA PUBLICIDAD\n5 - MODIFICAR CONDICIONES DE PUBLICACIÓN\n6 - CANCELAR CONTRATACIÓN\n7 - CONSULTA FACTURACIÓN\n8 - LISTAR CONTRATACIONES\n9 - LISTAR PANTALLAS\10 - INFORMAR\n11 - SALIR\n\n\n", "Opción no válida", 1, 5, 2);

		if(respuesta == 0)
		{
			switch(opcion)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				printf("Saliste del sistema.");
				//Agregar desea salir del sistema?
				exit(0);
				break;
			}
		}

		}while(opcion != 11);



	return EXIT_SUCCESS;
}

//Inicializar arrays

int initArraysPantalla(Pantalla array[], int len)
{
	int i;
		int retorno = 0;

			if(array != NULL && len > 0)
				{
					for(i=0; i < len; i++)
					{
						array[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
					}

					retorno = 1;
				}

			return retorno;
}


//Buscar array libre
int buscarLibre(Pantalla array[], int len, int* posicion)
{
	int retorno;

	if(array != NULL && len > 0 && posicion != NULL)
	{
		int i;
		for(i=0; i < len; i++)
		{
			if(array[i].isEmpty == 1)
			{
				*posicion = 1;
				retorno = -1;
				break;
			}else
			{
				retorno = 0;
			}
		}
	}

	return retorno;
}
