#include <stdio.h>
#include <conio.h>

main () {
	float a,b,c,suma;
	int i;
	
	for (i=0;;++i) {
		
		printf("Ingrese el primer valor \n");
		scanf("%f",&a);
		printf("Ingrese el segundo valor \n");
		scanf("%f",&b);
		printf("Ingrese el tercerr valor \n");
		scanf("%f",&c);
		
		suma = a+b+c;
		
		printf("La suma es igual a %f \n",suma);
	}
}
