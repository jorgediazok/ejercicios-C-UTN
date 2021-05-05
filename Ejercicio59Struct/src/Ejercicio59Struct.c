/*
 ============================================================================
 Name        : Ejercicio59Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct producto
{
	int codigo;
	char descripcion[41];
	float precio;
};

void imprimir(struct producto p);

int main(void) {
	setbuf(stdout, NULL);

	struct producto pro;

	pro.codigo=1;
	strcpy(pro.descripcion, "naranjas");
	pro.precio=15.50;

	imprimir(pro);

	return EXIT_SUCCESS;
}

void imprimir(struct producto p)
{
	printf("Código del producto:%d\n", p.codigo);
	printf("Descripción:%s\n", p.descripcion);
	printf("Precio:%.2f", p.precio);
}
