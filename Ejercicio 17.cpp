#include <stdio.h>
#include <conio.h>

main() {
	int e,c;
	float b,potencia=1;
	
	printf("Ingrese un valor entero para el exponente \n");
	scanf("%d",&e);
	printf("Ingrese un valor real para la base \n");
	scanf("%f",&b);
	
	if (e==0) {
		printf("La potencia de %f elevado a %d es 1 \n",b,e);
		getche();
	}
	if ((b==0)&&(e<0)) {
		printf("No existe solucion para esta potencia \n");
		getche();
	}
	if (e==1){
		printf("La potencia de %f elevado a %d es igual a %f \n",b,e,b);
	}
	if (e>1) {
	
	for (c=0;c<e;++c) {
		potencia *= b;
	}
	printf("La potencia de %f elevado a %d es %f \n",b,e,potencia);
	getche();
}
else if (e<0) {
	for (c=0;c>e;--c) {
		potencia *= (1/b);
	}
	printf("La potencia de %f elevado a %d es %f \n",b,e,potencia);
	getche();
}
}
