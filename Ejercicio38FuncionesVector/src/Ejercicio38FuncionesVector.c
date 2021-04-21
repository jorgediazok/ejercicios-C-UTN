/*
 ============================================================================
 Name        : Ejercicio38FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar dos funciones:
 1) Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
 2) Retomar la cantidad de vocales que tiene la palabra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(char palabra[40]);
int cantidadDeVocales (char palabra[40]);


int main(void) {
	setbuf(stdout, NULL);

	char pal[40];
	cargar(pal);
	printf("La cantidad de vocales que tiene la palabra: %s es de %d", pal, cantidadDeVocales(pal));

	return EXIT_SUCCESS;
}

void cargar(char palabra[40])
{
	printf("Ingrese una palabra: \n");
	gets(palabra);
}


int cantidadDeVocales (char palabra[40])
{
int cantidad = 0;
int i=0;

while(palabra[i] != '\0')
{
	if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u' || palabra[i]=='A' || palabra[i]=='E' || palabra[i]=='I' || palabra[i]=='O' || palabra[i]=='U')
	{
		cantidad++;
	}

	i++;

}
	return cantidad;
}
