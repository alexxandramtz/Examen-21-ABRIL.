#include <stdio.h>
/*Ejercicio 3*/
/*	Escribe un programa en C que solicite al usuario que ingrese un número del 1 al 7, */
/*	representando los días de la semana (por ejemplo, 1 para Lunes, 2 para Martes, */
/*    etc.). El programa debe utilizar un switch para imprimir el nombre del día */
/*	correspondiente al número ingresado por el usuario.*/
/*	Por ejemplo, si el usuario ingresa el número 3, el programa debería imprimir */
/*	"Miércoles".*/
/*	Si el usuario ingresa un número fuera del rango del 1 al 7, el programa debe imprimir */
/*	"Número de día inválido".*/


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
		printf("Miércoles\n");
		break;
	case 4:
		printf("Jueves\n");
		break;
	case 5:
		printf("Viernes\n");
		break;
	case 6:
		printf("Sábado\n");
		break;
	case 7:
		printf("Domingo\n");
		break;
	default:
		printf("Número de día inválido");
	}
	
	
	
	
	
	
	return 0;
}

