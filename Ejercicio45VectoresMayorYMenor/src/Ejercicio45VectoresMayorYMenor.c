/*
 ============================================================================
 Name        : Ejercicio45VectoresMayorYMenor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargar un vector de 5 elementos. Imprimir el menor y un mensaje si se repite dentro del vector.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5]);
int menor(int vector[5]);



int main(void) {
	setbuf(stdout, NULL);

	int vec[5];
	int men;

	cargar(vec);
	men=menor(vec);

	printf("El elemento menor del vector es %d", men);

	return EXIT_SUCCESS;
}

void cargar(int vector[5])
{
	int i;

	for(i=0; i<5; i++)
	{
		printf("Ingrese elemento: \n");
		scanf("%d", &vector[i]);
	}
}

int menor(int vector[5])
{
 int men = vector[0];
 int i;

 for(i=0; i<5; i++)
 {
	 if(vector[i] < men)
	 {
		 men=vector[i];
	 }
 }
 return men;
}
