#include <stdio.h>
#include <conio.h>

main(){
	float a,b,c;
	
	printf("Ingrese las tres longitudes del triangulo a continuacion \n");
	printf("Lado a \n");
	scanf("%f",&a);
	printf("Lado b \n");
	scanf("%f",&b);
	printf("Lado c \n");
	scanf("%f",&c);
	
	if (a==b && a==c) {
		printf("El triangulo es Equilatero, sus lados son iguales \n");
		getche();
	}
	else if ((a!=b && b!=c) && (a!=c)){
		printf("El triangulo es Escaleno, todos sus lados son distintos \n");
		getche();
	}
	else {
	 	printf("El triangulo es Isosceles, tiene dos lados iguales y uno desigual \n");
	 	getche();
	 }
}
