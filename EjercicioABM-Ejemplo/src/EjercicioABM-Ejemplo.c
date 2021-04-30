/*
 ============================================================================
 Name        : EjercicioABM-Ejemplo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int legajo;
	char nombre[40];
	float promedio;
	int marca;
}alumno;

//Prototipos

void menu();
FILE *abrir_archivo(char *archivo, char *modo);
void mostrar (alumno registro);
long buscar (FILE *handler, int legajo);
int legajo_valido(int legajo);
void ingresa_valida_legajo(int legajo);
int validar_alfa_nombre(char *nombre);
int nombre_valido(char *nombre);
void ingresa_valida_nombre(char *nombre);
int promedio_valido(float promedio);
void ingresa_valida_promedio(float promedio);
void leer(alumno *registro, long size, long pos, FILE *handler);
void altas();
void bajas();
void listado();
void modificaciones();
void compactar();
void consulta();

int main(void) {
	setbuf(stdout, NULL);

	int opcion;

	do{
		menu();
		scanf("%1d", &opcion);
		system("cls");

		switch(opcion)
		{
		case 1: altas();
		break;
		case 2: modificaciones();
		break;
		case 3: bajas();
		break;
		case 4: listado();
		break;
		case 5: compactar();
		break;
		case 6: consulta();
		break;
		case 7:;
		}
	}while(opcion != 7);

	return EXIT_SUCCESS;
}


void menu()
{
	system("cls");
	printf("\n MENU \n");
	printf("\n 1 Altas");
	printf("\n 2 Modificaciones");
	printf("\n 3 Bajas Lógicas");
	printf("\n 4 Listado");
	printf("\n 5 Compactar archivo (baja física)");
	printf("\n 6 Consulta");
	printf("\n 7 Salir");
	printf("\n Ingrese opción: ");
}

FILE *abrir_archivo(char *archivo, char *modo)
{
	FILE *handler = fopen(archivo, modo);
	if(handler == NULL)
	{
		printf("Error de apertura \n");
		system("pause");
	}

	return handler;
}


void mostrar(alumno registro)
{
	printf("\n Legajo: %d", registro.legajo);
	printf("\n Nombre: %s", registro.nombre);
	printf("\n Promedio: %.2f", registro.promedio);
	//printf("\n Marca: %d, registro.marca");
	printf("\n ------------------------------- \n");
}

long buscar(FILE *handler, int legajo)
{
	alumno registro;
	long size = sizeof(alumno);
	long pos = -1L;
	rewind(handler);
	fread(&registro, size, 1, handler);
	while(!feof(handler))
	{
		if(registro.marca && registro.legajo == legajo)
		{
			pos = ftell(handler) - size;
			break;
		}
		else
		{
			fread(&registro, size, 1, handler);
		}
	}
}

int legajo_valido(int legajo)
{
	return legajo >= 0 && legajo <= 9999;
}


void ingresa_valida_legajo(int legajo)
{
	do {
		printf("\n Ingrese legajo, 0 termina: ");
		scanf("%d", &legajo);
		if(legajo_valido(legajo)) break;
		printf("\nLegajo no valido \n");
	} while (1);
}

int validar_alfa_nombre(char *nombre)
{
	int resultado = 1;
	while(*nombre)
	{
		char c = *nombre;
		if(!((c >= 'A' && c <= 'Z') || c == 'Ñ' || c == ' '))
		{
			resultado = 0;
			break;
		}

		nombre++;
	}
	return resultado;
}

int nombre_valido(char *nombre)
{
	int longitud = strlen(nombre);
	return longitud > 0 && longitud < 41 && validar_alfa_nombre(nombre);
}


void ingresa_valida_nombre(char *nombre)
{
	do{
		printf("\nNombre: ");
		getchar();
		gets(nombre);
		if(nombre_valido(nombre)) break;
		printf("\n Nombre no válido\n");
	}while(1);
}


int promedio_valido(float promedio)
{
	return promedio >= 1 && promedio <= 10;
}

void ingresa_valida_promedio(float promedio)
{
	do{
		printf("\n Promedio: ");
		scanf("%f", &promedio);
		if(promedio_valido(promedio)) break;
		printf("\n Promedio no válido\n");
	}while(1);
}


void leer(alumno *registro, long size, long pos, FILE *handler)
{
	fseek(handler, pos, SEEK_SET);
	fread(registro, size, 1, handler);
}

void altas()
{
	FILE *handler = abrir_archivo("maestro.dat", "a+b");
	if(handler != NULL)
	{
		alumno registro;
		system("cls");
		printf("\n Para dar de alta \n");
		ingresa_valida_legajo(registro.legajo);
		while(registro.legajo)
		{
			long pos = buscar(handler, registro.legajo);
			if(pos == -1L)
			{
				ingresa_valida_nombre(registro.nombre);
				ingresa_valida_promedio(registro.promedio);
				registro.marca = 1;
				long size = sizeof(alumno);
				fwrite(&registro, size, 1, handler);
				mostrar(registro);

			}else
			{
				printf("\n Legajo repetido\n");
				system("pause");
			}
			ingresa_valida_legajo(registro.legajo);
		}
		fclose(handler);
	}
}


void bajas()
{
	FILE *handler = abrir_archivo("maestro.dat", "r+b");
	if(handler != NULL)
	{
		alumno registro;
		long size = sizeof(alumno);
		long pos;
		char elec;
		do
		{
			system("cls");
			printf("\n Para dar de baja. \n");
			ingresa_valida_legajo(registro.legajo);
			if(registro.legajo)
			{
				pos = buscar(handler, registro.legajo);
				if(pos != -1L)
				{
					fseek(handler, pos, SEEK_SET);
					fread(&registro, size, 1, handler);
					printf("\n El registro actual es: ");
					mostrar(registro);
					printf("\n Está seguro de borrarlo? (s/n): ");
					getchar();
					elec = getchar();
					if(elec == 's' || elec == 'S')
					{
						registro.marca = 0;
						fseek(handler, pos, SEEK_SET);
						fwrite(&registro, size, 1, handler);
						printf("\n Registro borrado \n");
						system("pause");
					}
				}else
				{
					printf("Ese registro no existe \n");
					system("pause");
				}
			}
		} while(registro.legajo);

		fclose(handler);
	}
}


void listado()
{
	FILE *handler = abrir_archivo("maestro.dat", "rb");
	if(handler != NULL)
	{
		alumno registro;
		long size = sizeof(alumno);
		fread(&registro, size, 1, handler);
		while(!feof(handler))
		{
			if(registro.marca)
			{
				mostrar(registro);
			}
			fread(&registro, size, 1, handler);
		}

		fclose(handler);
		system("pause");
	}
}

void modificaciones()
{
	FILE *handler = abrir_archivo("maestro.dat", "r+b");

	if(handler != NULL)
	{
		alumno registro;
		long size = sizeof(alumno);
		long pos;
		int elec;

		do
		{
			system("cls");
			printf("\n Para modificar \n");
			ingresa_valida_legajo(registro.legajo);

			if(registro.legajo)
			{
				pos = buscar(handler, registro.legajo);
				if(pos != -1L)
				{
					leer(&registro, size, pos, handler);
					printf("\n El registro actual es: ");
					mostrar(registro);

					do
					{
						printf("\1.- Modificar nombre");
						printf("\2.- Modificar promedio");
						printf("\3.- Terminar modificaciones");
						printf("\4.- Ingrese opcion: ");
						scanf("%d", &elec);

						switch(elec)
						{
						case 1:
							ingresa_valida_nombre(registro.nombre);
							break;
						case 2:
							ingresa_valida_promedio(registro.promedio);
							break;
						case 3:;
						}
					}while(elec != 3);
					fseek(handler, pos, SEEK_SET);
					fwrite(&registro, size, 1, handler);
				}else
				{
					printf("El registro no existe \n");
					system("pause");
				}
			}
		}while(registro.legajo);
		fclose(handler);
	}
}


void compactar()
{
	FILE *handler = abrir_archivo("maestro.dat", "rb");
	FILE *handler1 = abrir_archivo("maestro.dat", "wb");
	if(handler != NULL && handler1 != NULL)
	{
		alumno registro;
		long size = sizeof(alumno);
		fread(&registro, size, 1, handler);
		while(!feof(handler)){
			if(!registro.marca)
			{
				printf("\n Registro eliminado en forma física.\n");
				mostrar(registro);
			}else
			{
				fwrite(&registro, size, 1, handler);
			}

			fread(&registro, size, 1, handler);
		}
		fclose(handler);
		fclose(handler1);
		remove("maestro.dat");
		rename("auxiliar.dat", "maestro.dat");
		system("pause");
	}
}


void consulta()
{
	FILE *handler = abrir_archivo("maestro.dat", "r+b");
	if(handler != NULL)
	{
		alumno registro;
		long size = sizeof(registro);
		long pos;
		do
		{
			system("cls");
			printf("\n Para consultar \n");
			ingresa_valida_legajo(registro.legajo);
			if(registro.legajo)
			{
				pos = buscar(handler, registro.legajo);
				if(pos != -1L)
				{
					leer(&registro, size, pos, handler);
					printf("\n El registro consultado es: ");
					mostrar(registro);
				}else
				{
					printf("Ese registro no existe \n");
				}
				system("pause");
			}
		}while(registro.legajo);
		fclose(handler);
	}
}
