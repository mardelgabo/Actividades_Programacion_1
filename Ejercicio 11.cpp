#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	
	float discriminante, raiz1, raiz2,a,b,c;
	
	printf("Ingrese tres numeros reales a continuacion: \n");
	getche();
	printf("Primer numero \n");
	scanf("%f",&a);
	printf("Segundo numero \n");
	scanf("%f",&b);
	printf("Terecer numero: \n");
	scanf("%f",&c);
	
	discriminante = (b*b-(4*a*c));
	
	if (discriminante == 0) {
		raiz1 = (-b)/(2*a);
		printf("La ecuacion tiene una sola raiz igual a %f \n",raiz1);
		getche();
	}
	else if (discriminante < 0) {
		printf ("La ecuacion cuadratica no tiene solución \n");
	}
	else {
		raiz1= (-b + sqrt(discriminante))/(2*a);
		raiz2= (-b - sqrt(discriminante))/(2*a);
		
		printf("Las raices son: Raiz 1 = %f Raiz 2 = %f \n", raiz1,raiz2);
		getche();
	}
}
