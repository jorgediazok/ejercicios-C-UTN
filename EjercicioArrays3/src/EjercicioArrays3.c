/*
 ============================================================================
 Name        : EjercicioArrays3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 De los 10 empleados de una fábrica se registra:
 -número de legajo(coincidente con el índice)
 -edad
 -sueldo
 Se pide ingresar los datos consecutivamente y
 calcular el sueldo promedio. (Clases 5 Ej-1-c)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	setbuf(stdout, NULL);
	int edad[10];
	int sueldo[10];
	int acumuladorSueldo = 0;
	float sueldoPromedio;
	int i;

	for(i=0; i<10; i++)
	{
		printf("Ingrese la edad: \n");
	    scanf("%d", &edad[i]);

	    printf("Ingrese el sueldo: \n");
	    scanf("%d", &sueldo[i]);

	    acumuladorSueldo += sueldo[i];
	}

	sueldoPromedio = (float) acumuladorSueldo / 10;

	printf("El sueldo promedio es: %.2f", sueldoPromedio);

	return EXIT_SUCCESS;
}
