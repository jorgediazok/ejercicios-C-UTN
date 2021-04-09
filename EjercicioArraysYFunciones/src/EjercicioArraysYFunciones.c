/*
 ============================================================================
 Name        : EjercicioArraysYFunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 4

void inicializar(int edades[], float sueldos[], int tamanio);
void cargar(int edades[], float sueldos[], int tamanio);
void calcularPromedioSueldos(float sueldos[], int tamanio);
void mostrarEmpleado(int legajo, int edad, float sueldo);
void mostrarEmpleados(int edades[], float sueldos[], int tamanio);

int main(void) {
	setbuf(stdout, NULL);

	int edad[TAM];
	float sueldo[TAM];

	inicializar(edad, sueldo, TAM);
	cargar(edad, sueldo, TAM);
	calcularPromedioSueldos(sueldo, TAM);
	mostrarEmpleados(edad, sueldo, TAM);

	return EXIT_SUCCESS;
}

void inicializar(int edades[], float sueldos[], int tamanio)
{
	int i=0;

	for(i=0; i<tamanio; i++){
		edades[i] = 0;
		sueldos[i] = 0;
	}
}

void cargar(int edades[], float sueldos[], int tamanio)
{
	int leg;
	int edad[TAM];
	float sueldo[TAM];
	char seguir;

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

}

void calcularPromedioSueldos(float sueldos[], int tamanio)
{

	int i;
	int acumuladorSueldo = 0;
	int contadorLegajos = 0;
	float promedio;

	for(i=0; i<tamanio; i++)
	{
	if(sueldos[i] > 0){
	contadorLegajos ++;
	acumuladorSueldo = acumuladorSueldo + sueldos[i];
	    }
	}

	promedio = acumuladorSueldo / contadorLegajos;

	printf("El sueldo promedio es: %.2f \n", promedio);

	}


void mostrarEmpleado(int legajo, int edad, float sueldo)
{
	printf("\n %4d      %2d       %.2f       \n", legajo, edad, sueldo);
}

void mostrarEmpleados(int edades[], float sueldos[], int tamanio)
{
	int i=0;

	system("cls");
	printf("\n Legajo   Edad   Sueldo");

	for(i=0; i<tamanio; i++)
	{
		mostrarEmpleado(i+1, edades[i], sueldos[i]);
	}
}

