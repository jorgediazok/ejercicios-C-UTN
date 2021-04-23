/*
 * utn.h
 *
 *  Created on: 21 abr. 2021
 *      Author: Jorge
 */

#ifndef UTN_H_
#define UTN_H_

//Limpieza de arrays

void limpiarArrayEntero(int array[], int lenArray);
void limpiarArrayFloat(float array[], int lenArray);
void limpiarArrayChar(char array[], int lenArray);
void limpiarArrayString(char array[][20], int lenArray);

//Carga de arrays

int cargaArrayEntero(int array[], int lenArray);
int cargaArrayFloat(float array[], int lenArray);
int cargaArrayChar(char array[], int lenArray);
int cargaArrayString(char array[][20], int lenArray);


#endif /* UTN_H_ */
