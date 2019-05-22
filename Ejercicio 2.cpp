#include <stdio.h>
#include <conio.h>
#include <math.h>
	 main() {
		float radio=0, per=0, sup=0;
		
		printf("Ingrese el radio: \n");
		scanf("%f", &radio);
		
		per= M_PI * radio;
		sup= M_PI * radio * radio;
		
		printf("El perimetro es: %f \n", per);
		printf("La superficie es: %f \n", sup);
		
		getche();
	
	}
