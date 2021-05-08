/*
 ============================================================================
 Name        : EjercicioStringEjemplo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre[11]; //O sea son 10 en realidad, pero se cuenta el 0 al final. Si quiero un array de 10 cosas, le tengo que poner 11 y así sucesivamente.
	char auxiliar[11];
	//Para hacer una copia dentro del nombre no puedo hacer como en JS nombre="JUAN", debo hacer lo siguiente

	strcpy(nombre, "JUAN\n");
	printf(nombre); //Imprime Juan

	//Para inicializarlo si puedo hacer letra por letra, por ejemplo char nombre[11] = {"J", "U", "A", "N", "\0"} o como "JUAN";
	// O sea todo bien puedo inicializar un string pero NO modificarlo, para eso debo usar strcpy

	strcpy(nombre,"MARIA\n");
	printf(nombre); //Imrpime María

	strcpy(auxiliar, nombre);
	printf(nombre); //Imprime María dentro del auxiliar

	//strcpy no da segurida en cuanto a desbordes de memoria, porque si auxiliar fuera auxiliar[3], se me desborda
	//Por eso se usa strncpy que es su versión segura

	strncpy(auxiliar,nombre,sizeof(auxiliar));
	printf(auxiliar); //Imprime María si el array tiene 11 e IA si tiene 3, no me desborda

	//STRNLEN mide la cantidad de posiciones ocupadas en el array, el largo del string

	printf("STRLEN Nombre mide %d ---- auxiliar mide %d\n", strnlen(nombre, sizeof(nombre)), strnlen(auxiliar, sizeof(auxiliar)));

	//Concatenar texto

	strncat(nombre, "lalala", sizeof(nombre)); //A nombre que ya valía maría le agrego lalala
	printf(nombre);


	return EXIT_SUCCESS;
}
