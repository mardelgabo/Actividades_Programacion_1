#include <stdio.h>
#include <conio.h>

main(){
	float horas, precio, salario;
	
	printf("Ingrese la cantidad de horas trabajadas: \n");
	scanf("%f",&horas);
	printf("Ingrese el precio por hora trabajada: \n");
	scanf("%f",&precio);
	
	salario=horas*precio;
	printf("El salario correspondiente es: %f",salario);
	getche();
}
