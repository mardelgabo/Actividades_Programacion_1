#include <stdio.h>
#include <conio.h>

main () {
	float  v=0,prom, suma=0;
	int c,d=0;
	int n;
	
	printf("Ingrese la cantidad de valores que desea promediar \n");
	scanf("%d",&n);
	
	
	for (c=0;c<n;++c) {
		
		printf("Ingrese un valor \n");
		scanf("%f",&v);
		if (v>0) {
		
		++d;
		suma += v;
	}}
	if (suma>0)
			{
			
	prom= suma /d;
	
	printf("El promedio de los valores mayores a 0 es %f \n",prom);
	getche();
}
	else {
		printf("No se ingresaron valores mayores a 0 \n");
		getche();
	}
	
	
}
