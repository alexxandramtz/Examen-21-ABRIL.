#include <stdio.h>
/*Ejercicio 4*/
/*	Escribe un programa en C que solicite al usuario ingresar un número entero positivo. */
/*	El programa debe implementar una función llamada esPar que reciba un número */
/*	entero como argumento y no devuelva ningún valor. Esta función verificará si el */
/*	número dado es par o no.*/
/*	El programa principal debe utilizar un ciclo do-while para solicitar al usuario que */
/*	ingrese un número hasta que ingrese un número par. Dentro del ciclo, llamará a la */
/*	función esPar para determinar si el número ingresado es par o no. Si el número es */
/*	par, el programa imprimirá "¡Número par ingresado!" y terminará; de lo contrario, */
/*	imprimirá "Número impar ingresado. Inténtalo de nuevo".*/
/*	La función esPar debe verificar si el número recibido como argumento es divisible */
/*	por 2. Si lo es, el número se considera par; de lo contrario, es impar*/


void espar(int numero){
	if(numero % 2 == 0){
		printf("numero par:\n");
	
	}
	else{
		printf("numero impar. intentalo de nuevo....");
	}
}


int main(int argc, char *argv[]) {
	
	int numero;
	
	do{
		printf("Ingresa un numero entero positivo: \n");
		scanf("%d",&numero);
		
		espar( numero);
		
	} while(numero % 2 != 0);
	
	
	
	
	
	
	
	
	
	return 0;
}

