/*
 ============================================================================
 Name        : EjercicioClase7-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir una funcion validarFloat() que reciba un array de chars en donde los caracteres representan un numero decimal. La
 funcion debera devolver en su valor de retorno si la cadena recibida contiene o no un valor numerico en formato texto.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarNumeroFloat(char* stringRecibido);

int main(void) {
	setbuf(stdout, NULL);

	char numero[8];

	numero[0]='3';
	numero[1]='.';
	numero[2]='1';
	numero[3]='4';
	numero[4]='\0';

	if(validarNumeroFloat(numero)==1)
	{
		printf("Es un número flotante");
	}
	else
	{
		printf("No es un número flotante");
	}

	return 0;

	return EXIT_SUCCESS;
}

int validarNumeroFloat(char* stringRecibido)
{
 int retorno = 1; //Está todobien, es válida la cadena como si fuese un float
 int i;

 for(i=0;i<stringRecibido[i]!='\0';i++)
 {
	 if((stringRecibido[i]<'0' || stringRecibido[i]>'9') && (stringRecibido[i] != '.'))
		{
		 retorno = 0; //Doy error
		 break;
		}
 }

 return retorno;
}

