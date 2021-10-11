/*
 * Pantalla.h
 *
 *  Created on: 30 sep. 2021
 *      Author: eduar
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_
#include <stddef.h>
#include <stdio.h>
#include <string.h>


typedef struct {
	int tipo;
	float precio;
	int id;
	char nombre[128];
	char direccion[128];
	int IsEmpty; // 0: Ocupado // 1: libre /
} Pantalla;

int utn_getText(char pResultado[], int len, char* mensaje, char* mensajeError, int reintentos);

int disp_initList(Pantalla array[], int len);
int buscarLibre(Pantalla array[], int *posicion, int tam);
int altaPantalla(Pantalla array[], int posicion, int *contadorId);

#endif /* PANTALLA_H_ */
