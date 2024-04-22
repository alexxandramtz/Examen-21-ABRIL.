#include <stdio.h>
/*Ejercicio 4*/
/*	Escribe un programa en C que solicite al usuario ingresar un n�mero entero positivo. */
/*	El programa debe implementar una funci�n llamada esPar que reciba un n�mero */
/*	entero como argumento y no devuelva ning�n valor. Esta funci�n verificar� si el */
/*	n�mero dado es par o no.*/
/*	El programa principal debe utilizar un ciclo do-while para solicitar al usuario que */
/*	ingrese un n�mero hasta que ingrese un n�mero par. Dentro del ciclo, llamar� a la */
/*	funci�n esPar para determinar si el n�mero ingresado es par o no. Si el n�mero es */
/*	par, el programa imprimir� "�N�mero par ingresado!" y terminar�; de lo contrario, */
/*	imprimir� "N�mero impar ingresado. Int�ntalo de nuevo".*/
/*	La funci�n esPar debe verificar si el n�mero recibido como argumento es divisible */
/*	por 2. Si lo es, el n�mero se considera par; de lo contrario, es impar*/


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

