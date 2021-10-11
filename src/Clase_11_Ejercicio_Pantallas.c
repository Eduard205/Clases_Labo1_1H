/*
 ============================================================================
 Name        : Clase_11_Ejercicio_Pantallas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Eduard Brito - 1H
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Pantalla.h"
#define PANTALLAS_LEN 100

int main(void) {
	setbuf(stdout, NULL);

	int posicion;
	int contadorId = 1;

	Pantalla listaPantallas[PANTALLAS_LEN];

	disp_initList(listaPantallas, PANTALLAS_LEN);

	if (buscarLibre(listaPantallas, &posicion, PANTALLAS_LEN) != -1) {
		altaPantalla(listaPantallas, posicion, &contadorId);
		contadorId++;

	}

	return EXIT_SUCCESS;
}
