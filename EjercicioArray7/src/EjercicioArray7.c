/*
 ============================================================================
 Name        : EjercicioArray7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas
 Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y
 cuántas más bajas.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_ALTURAS 5

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int mayor=0;
	int menor=0;
	float suma=0;
	float alturas[NUM_ALTURAS];
	float promedio;

	for(i=0;i<NUM_ALTURAS;i++){
		printf("Ingrese la altura de la persona: \n");
		scanf("%f", &alturas[i]);
	}

	for(i=0;i<NUM_ALTURAS;i++){
		suma+=alturas[i];
	}

	promedio = suma/NUM_ALTURAS;
	printf("El promedio de alturas es %.2f \n", promedio);

	for(i=0;i<NUM_ALTURAS;i++){
		if(alturas[i]>promedio){
			mayor++;
		}else{
			if(alturas[i]<promedio){
				menor++;
			}
		}
	}

	printf("Cantidad de personas con altura mayor al promedio: %d \n", mayor);
	printf("Cantidad de personas con altura menor al promedio: %d \n", menor);

	return EXIT_SUCCESS;
}
