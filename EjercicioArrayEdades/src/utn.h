/*
 * utn.h
 *
 *  Created on: 6 may. 2021
 *      Author: Jorge
 */

#ifndef UTN_H_
#define UTN_H_

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un n�mero entero, para su validaci�n.

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un n�mero flotante, para su validaci�n.

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un caracter, para la validaci�n de datos.

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);




#endif /* UTN_H_ */
