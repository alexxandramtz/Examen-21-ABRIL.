#include <stdio.h>
/*Ejercicio 2*/
/*	Escribe un programa en C que solicite al usuario que ingrese un n�mero entero */
/*	positivo. Luego, el programa debe imprimir todos los n�meros enteros positivos */
/*	desde 1 hasta el n�mero ingresado por el usuario, cada uno en una l�nea separada.*/
/*	Por ejemplo, si el usuario ingresa el n�mero 5, el programa deber�a imprimir:*/
/*	1*/
/*	2*/
/*	3*/
/*	4*/
/*	5*/

int main(int argc, char *argv[]) {

	int numero,i;
	printf("ingrese un numero entero positivo: \n");
	scanf("%d", &numero);
	
	for(i = 1; i<=numero; i++){
		printf("\n%d",i);
	}
	//printf("\n");
	return 0;
}

