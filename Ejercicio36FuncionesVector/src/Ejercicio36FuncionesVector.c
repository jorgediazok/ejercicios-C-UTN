/*
 ============================================================================
 Name        : Ejercicio36FuncionesRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar los siguientes
 funciones: 1-Cargar sueldos 2-Impresión de los sueldos 3-Gasto total de la empresa en sueldos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargarSueldos(float sueldos[6]);
void imprimirSueldos(float sueldos[6]);
void calcularGastos(float sueldos[6]);

int main(void) {
	setbuf(stdout, NULL);

	float salarios[6];

	cargarSueldos(salarios);
	imprimirSueldos(salarios);
	calcularGastos(salarios);

	return EXIT_SUCCESS;
}

void cargarSueldos(float sueldos[6])
{
	for(int i=0; i<6; i++)
	{
		printf("Ingrese el sueldo del empleado: \n");
		scanf("%f", &sueldos[i]);
	}
}

void imprimirSueldos(float sueldos[6])
{
	printf("Listado completo de sueldos: \n");

	for(int i=0;i<6;i++)
	{
	printf("%0.2f\n",sueldos[i]);
	}
}

void calcularGastos(float sueldos[6])
{
	float total = 0;

	for(int i=0;i<6;i++)
	{
		total+=sueldos[i];
	}

	printf("Gasto total de la empresa: %.2f", total);
}
