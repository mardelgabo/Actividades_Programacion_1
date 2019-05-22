#include <stdio.h>
#include <conio.h>

main(){
	int n1,n2;
	
	printf("Ingrese el primer numero: \n");
	scanf("%d",&n1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&n2);
	
	if (n1==n2){
		printf("Ambos numeros son iguales \n");
	}
	if (n1 > n2) {
		printf("El mayor numero es: %d \n",n1);
	}
	else if (n1 < n2) {
		printf("El mayor numero es: %d \n",n2);}
	
	getche();
}
