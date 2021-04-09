/*
 ============================================================================
 Name        : EjercicioArrays5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(void) {
	setbuf(stdout, NULL);

	int edad[TAM];
	int i;
	int leg;
	int contadorLegajos = 0;
	float sueldo[TAM];
	float acumuladorSueldo = 0;
	float promedio;
	char seguir;

	//Inicializo en 0

	for(i=0;i<TAM;i++)
	{
		edad[i] = 0;
		sueldo[i] = 0;
	}

	do{
	printf("Ingrese Legajo: \n");
	scanf("%d", &leg);

	printf("Ingrese Edad: \n");
	scanf("%d", &edad[leg]);

	printf("Ingrese el sueldo: \n");
	scanf("%f", &sueldo[leg]);

	printf("Desea ingresar otra persona? s/n \n");
	fflush(stdin);
	scanf("%c", &seguir);

	}while(seguir == 's');


	for(i=0; i<TAM; i++) //Cuento legajos ingresados
	{
		if(edad[i] != 0){
			contadorLegajos ++;
			acumuladorSueldo = acumuladorSueldo + sueldo[i];
		}
	}

	promedio = acumuladorSueldo / contadorLegajos;

	printf("El sueldo promedio es: %.2f \n", promedio);

	for(i=0; i<TAM; i++)
	{
		if(edad[i] != 0){
		printf("Legajo %d \n", i);
		printf("Edad %d \n", edad[i]);
		printf("Sueldo %f \n", sueldo[i]);
		}
	}

	return EXIT_SUCCESS;
}
