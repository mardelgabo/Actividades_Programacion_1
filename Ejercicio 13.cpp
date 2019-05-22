#include <stdio.h>
#include <conio.h>

main() {
	float a,b,formula;
	int r2=16;
	
	printf("Ingrese el primer valor \n");
	scanf("%f",&a);
	printf("Ingrese el segundo valor \n");
	scanf("%f",&b);
	
	formula = ((a*a)+(b*b));
	
	if (formula == r2) {
		printf("Los valores ingresados corresponden a un punto en la circunferencia de radio = 4 \n");
		getche();
	}
	else {
		printf("Los valores infresados no corresponden a un punto en la circunferencia de radio = 4 \n");
		getche();

	}
}
