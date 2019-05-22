#include <stdio.h>
#include <conio.h>

main () {
	float n1,n2,n3;
	
	do {
		printf("Ingrese tres numeros reales, separados por un espacio, luego presione enter \n" );
		scanf("%f %f %f",&n1,&n2,&n3);
		
		if ((n1>n2)&&(n1>n3)) {
			printf("El mayor es %f \n",n1);
		}
		else if ((n1<n2)&&(n2>n3)){
			printf("El mayor es %f \n",n2);
		}
		else if((n3>n1)&&(n3>n2)){
			printf("El mayor es %f \n",n3);
		}
		
		}
	
	while ((n1!=n2) && (n1!=n3)); 
	
	
	printf("Presiones una tecla para salir \n");
			getche();
	
}
