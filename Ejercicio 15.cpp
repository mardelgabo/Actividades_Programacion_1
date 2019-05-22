#include <stdio.h>
#include <conio.h>

main() {
	
	int a,b,suma = 0,c;
	
	printf("Ingrese dos numeros enteros a continuacion: \n");
	printf("Ingrese el primer numero entero: \n");
	scanf("%d",&a);
	printf("Ingrese el segundo numero entero: \n");
	scanf("%d",&b);
	
	for (c=0;c < b;++c) {
		suma += a;
	}
	printf("La multiplicacion de %d por %d es igual a %d \n",a,b,suma);
	getche();
	
	}
