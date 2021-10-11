/*
 * Pantalla.c
 *
 *  Created on: 30 sep. 2021
 *      Author: eduar
 */
#include "Pantalla.h"




int disp_initList(Pantalla array[], int len) {
	int retorno = -1;
	int i;

	if (array !=NULL && len > 0) {
		for (i = 0; i < len; i++) {
			array[i].IsEmpty =1;
		}
		retorno = 0;
	}
	return retorno;
}


int buscarLibre(Pantalla array[], int *posicion, int tam) {

	int rtn = -1;
	if (array != NULL && posicion != NULL && tam > 0) {

		for (int i = 0; i < tam; i++) {
			if (array[i].IsEmpty == 1) {
				*posicion = i;
				rtn = 0;
				break;
			}
		}
	}
	return rtn;
}


int altaPantalla(Pantalla array[], int posicion, int *contadorId) {

char nombreAux[128];

	array[posicion].id = *contadorId;


	if(utn_getText(nombreAux,128,"ingrese Nombre:","error",3)==0){

		strcpy(array[posicion].nombre, nombreAux);
	}

	/*
	printf("Ingrese nombre: ");
	fflush(stdin);
	fgets(pResultado,len,stdin) (array[posicion].nombre);

	printf("Ingrese apellido: ");
	fflush(stdin);
	gets(array[posicion].apellido);

	printf("Ingrese sector: ");
	scanf("%d", &array[posicion].sector);

	printf("Ingrese sueldo: ");
	scanf("%f", &array[posicion].sueldo);

*/
	array[posicion].IsEmpty= 0;

	printf("Id empleado: %d\n", array[posicion].id);
	printf("Nombre: %s\n", array[posicion].nombre);
	//printf("Apellido: %s\n", array[posicion].apellido);
	//printf("Sector: %d\n", array[posicion].sector);
	//printf("Sueldo: %.2f\n", array[posicion].sueldo);
	printf("isEmpty: %d\n", array[posicion].IsEmpty);

	return 0;
}




/*
int disp_loadDisplay(Pantalla *pDisplay)
{
// pide los datos al usuario y me los deja
	// cargados dentro de la struct que recibo
	array[posicion].id = *contadorId;

		printf("Ingrese nombre: ");
		fflush(stdin);
		gets(array[posicion].nombre);

		printf("Ingrese apellido: ");
		fflush(stdin);
		gets(array[posicion].apellido);

		printf("Ingrese sector: ");
		scanf("%d", &array[posicion].sector);

		printf("Ingrese sueldo: ");
		scanf("%f", &array[posicion].sueldo);

		array[posicion].isEmpty = 0;
}
*/


int utn_getText(char pResultado[], int len, char* mensaje, char* mensajeError, int reintentos)
{
    int retorno = -1;
    int i;
    for(i=0; i<=reintentos; i++)
    {
        if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
        {
            printf("%s", mensaje);
            fflush(stdin);
            //gets(pResultado); // NOOOOOOO
            //if(scanf("%s", pResultado)==1) // NOOOOOOO
            if(fgets(pResultado,len,stdin)!=NULL)
            {
                retorno = 0;
                break;
            }
            else
                printf("%s", mensajeError);
        }
    }
    return retorno;
}

