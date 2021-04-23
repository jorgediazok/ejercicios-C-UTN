/*
 ============================================================================
 Name        : EjercicioClase22AbrilEstructuras4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosPersonales{
	char nombre[20];
	char apellido[20];
	char calle[20];
	int numero;
};

int main(void) {
	setbuf(stdout, NULL);

	struct datosPersonales vecAgenda[3], vecContactos[3], vecAmigos[3];
	int i;


	for(i=0; i<3;i++)
	{
		printf("\nIngrese nombre: \n");
		gets(vecAgenda[i].nombre);

		printf("Ingrese apellido: \n");
		gets(vecAgenda[i].apellido);

		printf("Ingrese calle: \n");
		gets(vecAgenda[i].calle);

		printf("Ingrese numero de calle: \n");
		scanf("%d", &vecAgenda[i].numero);

		fflush(stdin);
	}

	//Mostrar elementos de la estructura
	for(i=0; i<3; i++)
	{
		printf("\nNombre: %s ", vecAgenda[i].nombre);
		printf("\nApellido: %s ", vecAgenda[i].apellido);
		printf("\nCalle: %s ", vecAgenda[i].calle);
		printf("\nNúmero: %d \n", vecAgenda[i].numero);
	}

	//Asignar una estructura a otra y mostrar
	for(i=0; i<3; i++)
	{
		strcpy(vecContactos[i].nombre, vecAgenda[i].nombre);
		strcpy(vecContactos[i].apellido, vecAgenda[i].apellido);
		strcpy(vecContactos[i].calle, vecAgenda[i].calle);
		vecContactos[i].numero = vecAgenda[i].numero;

		printf("\n Nombre %d copiado %s", i, vecContactos[i].nombre);
		printf("\n Apellido %d copiado %s ", i, vecContactos[i].apellido);
		printf("\n Calle %d copiada %s ", i, vecContactos[i].calle);
		printf("\n Numero %d copiado %d ", i, vecContactos[i].numero);
	}

	//Si tienen un mismo formato ahorro código
	for(i=0; i<3;i++)
	{
		vecAmigos[i] = vecContactos[i];

		printf("\n Amigos/Nombre %d Amigos copiado %s ", i, vecAmigos[i].nombre);
		printf("\n Amigos/Apellido %d Amigos copiado %s ", i, vecAmigos[i].apellido);
		printf("\n Amigos/Calle %d Amigos copiado %s ", i, vecAmigos[i].calle);
		printf("\n Amigos/Numero %d Amigos copiado %d ", i, vecAmigos[i].numero);

	}

	//Si hay que hacer un swapeo
//	for(i=0; i<3; i++)
//	{
//		int j;
//		int auxVec = vecAmigos[i];
//		vecAmigos[i] = vecAmigos[j];
//		vecAmigos[j] = auxVec;
//
//	}

	return EXIT_SUCCESS;
}
