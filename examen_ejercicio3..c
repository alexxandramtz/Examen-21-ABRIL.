#include <stdio.h>
/*Ejercicio 3*/
/*	Escribe un programa en C que solicite al usuario que ingrese un n�mero del 1 al 7, */
/*	representando los d�as de la semana (por ejemplo, 1 para Lunes, 2 para Martes, */
/*    etc.). El programa debe utilizar un switch para imprimir el nombre del d�a */
/*	correspondiente al n�mero ingresado por el usuario.*/
/*	Por ejemplo, si el usuario ingresa el n�mero 3, el programa deber�a imprimir */
/*	"Mi�rcoles".*/
/*	Si el usuario ingresa un n�mero fuera del rango del 1 al 7, el programa debe imprimir */
/*	"N�mero de d�a inv�lido".*/


int main(int argc, char *argv[]) {
	
	
	int numerodia;
	
	printf("Ingrese un numero del 1 al 7: \n");
	scanf ("%d",&numerodia);
	
	switch(numerodia){
		
	case 1:
		printf("Lunes\n");
		break;
	case 2:
		printf("Martes\n");
		break;
	case 3:
		printf("Mi�rcoles\n");
		break;
	case 4:
		printf("Jueves\n");
		break;
	case 5:
		printf("Viernes\n");
		break;
	case 6:
		printf("S�bado\n");
		break;
	case 7:
		printf("Domingo\n");
		break;
	default:
		printf("N�mero de d�a inv�lido");
	}
	
	
	
	
	
	
	return 0;
}

