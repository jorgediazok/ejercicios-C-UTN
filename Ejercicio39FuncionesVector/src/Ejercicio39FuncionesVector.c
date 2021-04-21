/*
 ============================================================================
 Name        : Ejercicio39FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de
 5 personas.

 Desarrollar las siguientes funciones:
 1) Carga del vector
 2) Retomar el promedio del vector
 3) Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(float alturas[5]);
float calcularPromedio(float alturas[5]);
void altasBajas(float alturas[5], float prom);


int main(void) {
	setbuf(stdout, NULL);

	float heights[5];
	float promedio;

	cargar(heights);

	promedio = calcularPromedio(heights);

	printf("Alturas promedio de las personas: %.2f \n", promedio);
	altasBajas(heights, promedio);

	return EXIT_SUCCESS;
}

void cargar(float alturas[5])
{
	int i;

	for(i=0; i<5; i++){
	printf("Ingrese altura de la persona: \n");
	scanf("%f", &alturas[i]);
	}

}

float calcularPromedio(float alturas[5])
{
	float suma = 0;
	float promedio = 0;
	int i;

	for(i=0; i<5; i++)
	{
		suma = suma + alturas[i];
	}

	promedio = suma / 5;

	return promedio;

}

void altasBajas(float alturas[5], float prom)
{
	int altos = 0;
	int bajos = 0;
	int i;

	for(i=0; i<5; i++)
	{
		if(alturas[i] > prom)
		{
			altos++;
		}
		else
		{
			if(alturas[i] < prom)
			{
				bajos++;
			}
		}
	}

	printf("Cantidad de personas más altas al promedio: %d \n", altos);
	printf("Cantidad de personas más bajas al promedio: %d \n", bajos);
}
