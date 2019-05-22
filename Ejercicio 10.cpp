#include <stdio.h>
#include <conio.h>

main(){
	
	int a,b,sum,dif, prod;
	float cociente;
	
	printf("Ingrese el primer numero \n");
	scanf("%d",&a);
	printf("Ingrese el segundo numero \n");
	scanf("%d",&b);
	
	sum = a+b;
	dif = a-b;
	prod = a*b;
	
	
	printf("La suma es igual a : %d \n", sum );
	printf("La diferencia es igual a : %d \n", dif );
	printf("El producto es igual a : %d \n", prod );
	if (b==0){
		printf("No se puede dividir por cero \n");
	}
	 else {
	 	cociente = a /b;
	 	printf("La division es igual a : %d \n", cociente );
	 }
}


	
	
	

