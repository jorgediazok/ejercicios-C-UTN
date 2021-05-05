/*
 ============================================================================
 Name        : Ejercicio60Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pais
{
	char nombre[40];
	int cantidadDeHab;
};

void imprimir(struct pais p);

int main(void) {
	setbuf(stdout, NULL);

	struct pais pais1=("Argentina",40000000);
	struct pais pais2=("Chile",20000000);
	struct pais pais3=("Brasil",150000000);
	imprimir(pais1);
	imprimir(pais2);
	imprimir(pais3);

	return EXIT_SUCCESS;
}

void imprimir(struct pais p)
{
	printf("País:%s Población:%d\n",p.nombre,p.cantidadDeHab);
}

