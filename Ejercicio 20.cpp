#include <stdio.h>
#include <conio.h>
#include <math.h>

main (){
	float n,per,sup;
	
	
	do {
	
		printf("Ingrese un numero para el radio, para salir, ingrese un numero igual o menor a cero \n");
		scanf("%f",&n);
		
		if (n>0) {
			per = M_PI*n;
			sup = M_PI*n*n;
			printf("El perimetro de la circunferencia es %f y su area es %f \n",per,sup);
		}
	
	}
	while (n>0);
	
		
	
	
	
	printf("Presione cualquier tecla para salir \n");
	getche();
}
