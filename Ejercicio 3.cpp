#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	
	int num;
	
	printf("Ingrese un numero entero: \n");
	scanf("%d",&num);
	
	
	if (num%2==0) {
		printf("El numero ingresado es par \n");
	}
		else {
			printf("El numero ingresado es impar \n");
			getche();
		}
	
}
