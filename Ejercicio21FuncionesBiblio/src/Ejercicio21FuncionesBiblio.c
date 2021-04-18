/*
 ============================================================================
 Name        : Ejercicio21FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string.
 Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123".
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char usuario[31];
	char clave[31];
	printf("Ingrese el nombre de usuario: \n");
	gets(usuario);
	printf("Ingrese la clave: \n");
	gets(clave);

	if(strcmp(clave,"abc123")==0){				//Para cadenas de caracteres no existe el == por eso se usa el strcmp. Strcmp es sensible a masyuculas y minusculas.
		printf("Ingresó al sistema.");
	}else{
		printf("Contraseña Incorrecta.");
	}


	return EXIT_SUCCESS;
}
