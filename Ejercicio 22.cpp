#include <stdio.h>
#include <conio.h>

main () {
	float  v=0,prom, suma=0,vmax=0;
	int c,d=0,posicion;
	int n;
	
	printf("Ingrese la cantidad de valores que desea comparar \n");
	scanf("%d",&n);
	
	
	for (c=1;c<=n;++c) {
		
		printf("Ingrese un valor \n");
		scanf("%f",&v);
		
		if (v>vmax) {
			vmax=v;
			posicion=c;
		}
		
	}
	
			
	
	
	printf("el mayor valor ingresado es %f en la posicion %d \n",vmax,posicion);
	getche();

	
	
	
}
