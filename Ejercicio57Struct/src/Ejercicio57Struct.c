/*
 ============================================================================
 Name        : Ejercicio57Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

struct producto{
	int codigo;
	char descripcion[41];
	float precio;
};

int main(void) {
	setbuf(stdout, NULL);

	struct producto pro1, pro2;

	printf("Ingrese el código del producto: \n");
	scanf("%d", &pro1.codigo);
	fflush(stdin);
	printf("Ingrese la descripción: \n");
	gets(pro1.descripcion);
	printf("Ingrese el precio: \n");
	scanf("%f", &pro1.precio);

	printf("Ingrese el código del producto: \n");
	scanf("%d", &pro2.codigo);
	fflush(stdin);
	printf("Ingrese la descripción: \n");
	gets(pro2.descripcion);
	printf("Ingrese el precio: \n");
	scanf("%f", &pro2.precio);

	if(pro1.precio > pro2.precio)
	{
		printf("El producto %s tiene un precio mayor", pro1.descripcion);
	}
	else
	{
		if(pro2.precio > pro1.precio)
			{
			printf("El producto %s tiene un precio mayor", pro2.descripcion);

			}
		else{
			printf("Los productos tienen igual precio");
		}
	}


	return EXIT_SUCCESS;
}
