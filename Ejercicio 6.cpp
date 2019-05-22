#include <stdio.h>
#include <conio.h>

main() {
	float libras, kilos,peso;
	
	printf("Ingrese el peso en libras que desea convertir: \n");
	scanf("%f",&libras);
	
	peso= libras * 0.454;
	
	printf("Equivale a %f kiogramos \n",peso);
	getche();
	
	
}
