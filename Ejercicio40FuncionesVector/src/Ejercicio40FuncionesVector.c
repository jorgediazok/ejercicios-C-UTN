/*
 ============================================================================
 Name        : Ejercicio40FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Una empresa tiene dos turnos mañana y tarde en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde).
 Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
 Imprimir los gastos en sueldos de cada turno.
 Se deben implementar las siguientes funciones: void cargar (float sueldos[4])
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(float sueldos[4]);
float gastosTurno(float sueldos[4]);


int main(void) {
	setbuf(stdout, NULL);

	float sueldosMa[4];
	float sueldosTar[4];

	printf("Carga de sueldos del turno mañana: \n");
	cargar(sueldosMa);

	printf("Carga de sueldos del turno tarde: \n");
	cargar(sueldosTar);

	printf("Gastos del turno mañana: %.2f \n", gastosTurno(sueldosMa));
	printf("Gastos del turno tarde: %.2f \n", gastosTurno(sueldosTar));

	return EXIT_SUCCESS;

}

void cargar(float sueldos[4])
{
	int i;

	for(i=0; i<4;i++)
	{
		printf("Ingrese el sueldo: \n");
		scanf("%f", &sueldos[i]);
	}
}

float gastosTurno(float sueldos[4])
{
	float total = 0;
	int i;

	for(i=0; i<4; i++)
	{
		total = total + sueldos[i];
	}

	return total;
}
