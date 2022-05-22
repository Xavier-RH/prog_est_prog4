/* Autor: Xavier Romero Hernández, Realizado: 03/02/2022 
	Calcula el area de un circulo
	*/
	
#include <stdio.h>
#include <math.h>

int main(){
	float radio, area;
	
	printf("Calcular el area de un circulo\n");
	printf("introduce radio: ");
	scanf("%f",&radio);
	
	area=M_PI*pow(radio,2);
	
	printf("\nEl area del circulo es de %.2f cm2",area);
	
}

