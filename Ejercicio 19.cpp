#include <stdio.h>
#include <conio.h>

main(){
	int n,suma=0;
	
	
	do{
	
	printf("Ingrese un numero entero \n");
	scanf("%d",&n);
	suma += n;
	}
	while (n!=0); 
	
	printf("Ls suma de los numeros ingresados es %d \n",suma);	
	printf("Presione una tecla para continuar \n");
	getche();
}
