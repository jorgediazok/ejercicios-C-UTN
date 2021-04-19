/*
 ============================================================================
 Name        : Ejercicio26FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad de horas
 trabajadas dentro de una estructura repetitiva en la funcion main. Elaborar una funcion que
 reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el
 total a pagar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void calcularSueldo(float costoHora, int cantidadHoras);

int main(void) {
	setbuf(stdout, NULL);

	float costoHora;
	int cantidadHoras;
	char seguir='s';

	while(seguir == 's'){
		printf("Cuanto paga por hora?: \n");
		scanf("%f", &costoHora);
		printf("Cuantas horas trabaja? : \n");
		scanf("%d", &cantidadHoras);
		calcularSueldo(costoHora, cantidadHoras);
		printf("Desea seguir cargando empleados?: s/n \n");
		scanf(" %c", &seguir);
	}

	return EXIT_SUCCESS;
}


void calcularSueldo(float costoHora, int cantidadHoras){
	float sueldo = costoHora * cantidadHoras;
	printf("El sueldo total a pagar es %.2f \n", sueldo);
}
