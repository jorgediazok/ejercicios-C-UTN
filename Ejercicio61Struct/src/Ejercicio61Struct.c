/*
 ============================================================================
 Name        : Ejercicio61Struct.c
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

struct producto cargar()
{
	struct producto pro;
	printf("Ingrese el código del producto:");
	scanf("%d", &pro.codigo);
	fflush(stdin);
	printf("Ingrese el nombre del producto:");
	gets(pro.descripcion);
	printf("Ingrese el precio:");
	scanf("%f", &pro.precio);
	return pro;
}

void imprimir(struct producto pro)
{
	printf("Datos del producto:\n");
	printf("Código: %d,\n", pro.codigo);
	printf("Descripción: %s\n", pro.descripcion);
	printf("Precio: %.2f\n", pro.precio);
}

int main(void) {
	setbuf(stdout, NULL);

	struct producto pro1, pro2;
	pro1=cargar();
	pro2=cargar();
	imprimir(pro1);
	imprimir(pro2);
	return EXIT_SUCCESS;
}
