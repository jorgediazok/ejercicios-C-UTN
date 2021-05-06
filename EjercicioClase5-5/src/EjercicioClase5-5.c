/*
 ============================================================================
 Name        : EjercicioClase5-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int idProducto;
	char descripcion[20];
	float precio;
	int isEmpty;
	int idProveedor;
}Producto;

typedef struct
{
	char calle[20];
	int numero;
	char localidad[20];
	int isEmpty;
}eDireccion;

typedef struct
{
	int idProveedor;
	char razonSocial[20];
	eDireccion direccion;
	int isEmpty;

}Proveedor;


int main(void) {
	setbuf(stdout, NULL);
	return EXIT_SUCCESS;
}

