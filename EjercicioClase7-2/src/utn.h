/*
 * utn.h
 *
 *  Created on: 6 may. 2021
 *      Author: Jorge
 */

#ifndef UTN_H_
#define UTN_H_

//Esta función sirve para CUALQUIER pregunta que quiera saber un número entero, para su validación.

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

//Esta función sirve para CUALQUIER pregunta que quiera saber un número flotante, para su validación.

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

//Esta función sirve para CUALQUIER pregunta que quiera saber un caracter, para la validación de datos.

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);




#endif /* UTN_H_ */
