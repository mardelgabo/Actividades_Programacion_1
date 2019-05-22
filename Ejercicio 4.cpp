#include <stdio.h>
#include <conio.h>

main () {
	float n1, n2, n3, n4, n5, sum;
	
	printf("ingrese el primer numero: \n");
	scanf("%f",&n1);
	printf("ingrese el segundo numero: \n");
	scanf("%f",&n2);
	printf("ingrese el tercer numero: \n");
	scanf("%f",&n3);
	printf("ingrese el cuarto numero: \n");
	scanf("%f",&n4);
	printf("ingrese el quinto numero: \n");
	scanf("%f",&n5);
	
	sum=n1+n2+n3+n4+n5;
	printf("la suma de los valores ingresados es: %f",sum);
	getche();
}
