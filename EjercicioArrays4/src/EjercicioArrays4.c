/*
 ============================================================================
 Name        : EjercicioArrays4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Carga aleatoria. En este caso se necesitan ingresar 2 valores, la posición
 donde se quiere ingresar el dato y el dato. Puede que no se quieran cargar
 todas los elementos del Array, por eso conviene INICIALIZARLO.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int v[10];
	int posicion;
	int i;
	char seguir;
	int valor;

	for(i=0; i<10; i++)
	{
		v[i] = 0;     //Inicializamos el array en 0;
	}


	//Mostrar todo en 0
	//	for(i=0; i<10; i++)
	//	{
	//		printf("Elemento %d: %d \n", i, array[i]);
	//	}

	do{
		printf("Ingrese posición: \n");
		scanf("%d", &posicion);

		printf("Ingrese valor a cargar en el array \n");
		scanf("%d", &valor);

		if(valor > 10)
		{
			printf("eligió un valor mayor a 10");
		}else
		{
			v[posicion] = valor;
		}

		printf("Desea ingresar otro dato s/n ? \n");
		fflush(stdin);
		scanf("%c", &seguir);

	}while(seguir == 's');

	//Imprimir resultado del bucle

	for(i=0; i<10; i++)
	{
		printf("Elemento %d: %d \n", i, v[i]);
	}

	return EXIT_SUCCESS;
}
