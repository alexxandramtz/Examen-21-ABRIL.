#include <stdio.h>
/*Escribe un programa en C en donde tenemos un arreglo de 5 posiciones de los cuales*/
/*	son tiene los elementos 23,4,1,44,55 y si la suma de los elementos da un numero par que */
/*	ordene el método de forma ascendente, pero si la suma da un numero impar ordene los */
/*	números de forma descendente*/
/*	Nota: tienes que imprimir los arreglos ordenados según lo marque la condición*/
int main(int argc, char *argv[]) {
	int arreglo [5]={23,4,1,44,55};
	int tamano,suma=0,i,j,aux;
	
	
	for(i = 0; i<tamano; i++){
		suma=suma+arreglo[i];
	}
	if(suma % 2 == 0){
		for(i =0; i < tamano; i++){
			
			for(j=0; j<tamano; j++){
				
				if(arreglo[j]> arreglo[j+1]){
					aux = arreglo[j];
					arreglo[j] = arreglo [j+1];
					arreglo[j+1] = aux;
					
					
					
					printf("La suma es par, y el arreglo esta ordenado de manera ascendente ");	
				}
            
				
					for(i = 0; i < tamano; i++){
						for(j = 0; j< tamano; j++){
							if(arreglo[j]< arreglo[j+1]){
								aux = arreglo[j];
								arreglo[j] = arreglo [j+1];
								arreglo[j+1] = aux;
							}
						
						}	
					}
				
			}  
			
		}
		
		
		
	
}
	for(i = 0; i < tamano; i ++){
		printf("%d",arreglo[i]);
	}
	
	
	
	return 0;
}

