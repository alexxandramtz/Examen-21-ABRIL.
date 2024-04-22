#include <stdio.h>
/*Ejercicio 1*/
/*	Imagina que estás desarrollando un sistema de calificaciones para una escuela. Se */
/*	te pide que escribas un programa en C que tome como entrada la calificación */
/*	numérica de un estudiante en un examen y determine su calificación equivalente en */
/*	letra, según la siguiente escala:*/
/*	• 90 o más: A*/
/*	• 80 - 89: B*/
/*	• 70 - 79: C*/
/*	• 60 - 69: D*/
/*	• Menos de 60: F*/
/*	El programa debe solicitar al usuario que ingrese la calificación numérica del */
/*	estudiante. Luego, debe determinar la calificación equivalente en letra utilizando */
/*	estructuras condicionales (if-else) y mostrarla al usuario.*/
int main(int argc, char *argv[]) {

	
	
	int calificacion;
	
	printf("Ingresa la calificación numérica del estudiante:\n");
	scanf("%d",&calificacion);
	
	if (calificacion >= 90){
		printf("Tu calificacion  es: A\n");
		
		
	}else if(calificacion >= 80 && calificacion <=89 ){
			printf("Tu calificacion es: B\n");
			
	 }else if(calificacion >= 70 && calificacion <=79 ){
		printf("Tu calificacion es: C\n");
		
	 }else if(calificacion >= 60 && calificacion <=69 ){
		printf("Tu calificacion es: D\n");
	 }else{  
		
		printf("Tu calificacion es: F\n");
	
	}

	return 0;
}

