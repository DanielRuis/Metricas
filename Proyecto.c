#include<stdio.h>

int a, n, result;

void validaciones();

int main(int argc, char *argv[]){
	//Pedimos los datos al usuario
	printf("\t \t Complejidad cicomatica \n");
	printf("------------------------------\n");
	printf("Ingrese la cantidad de Aristas\n->");
	scanf("%i", &a);
	printf("Ingrese la cantidad de Nodos\n->");
	scanf("%i", &n);
	result=a-n+2;//hacemos la operacion
	printf(" V(G) = %i - %i + 2 = %i \n", a, n, result);
	printf("------------------------------\n");
	validaciones(result);
	return 0;
}

void validaciones(int num){
	int valor = num;
	//validamos segun el resultado de la formula
	//1-El programa no cuenta con riesgos
	if(valor>1 && valor<=10){
		printf("Programa sin riesgos\n");
	}
	//2-El programa muestra una complejidad media
	if(valor>=11 && valor<=20){
		printf("Programa de media complejidad\n");
	}
	//3-Programa complejo
	if(valor>=21 && valor<=50){
		printf("Programa complejo\n");
	}
	//4-Programa no testeable
	if(valor>50){
		printf("programa no testeable\n");
	}
	if(valor<0){
		printf("Error, cheque los datos a ingresar");
	}
}