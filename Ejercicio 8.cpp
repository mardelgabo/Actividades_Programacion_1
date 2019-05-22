#include <stdio.h>
#include <conio.h>

main(){
	int n1,n2,n3;
	
	printf("Ingrese el primer numero: \n");
	scanf("%d",&n1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&n2);
	printf("Ingrese el tercer numero: \n");
	scanf("%d",&n3);
	
	if (n1==n2 && n1==n3){
		printf("Son iguales \n");
	}
	if (n1 > n2) {
		if (n1>n3) {
			printf("El mayor numero es: %d \n",n1);
		}
		else {
			printf("El mayor numero es: %d \n",n3);
		}
	}
	else if (n1 < n2) {
		if (n2>n3) {
			printf("El mayor numero es: %d \n",n2);
		}
		else {
			printf("El mayor numero es: %d \n",n3);
		}}
	
	getche();
}
