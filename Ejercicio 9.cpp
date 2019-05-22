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
	
	if (n1 <= n2 && n2 <= n3) {
		
			printf("el orden de menor a mayor es: %d %d %d \n",n1, n2, n3);
		}
		else if (n3 <= n2 && n2 <= n1){
			printf("el orden de menor a mayor es: %d %d %d \n",n3, n2, n1);
		}
		else if (n2 <= n1 && n1 <= n3){
			printf("el orden de menor a mayor es: %d %d %d \n",n2, n1, n3);
		}
		else if (n1 <= n2 && n3 <= n2){
			printf("el orden de menor a mayor es: %d %d %d \n",n1, n3, n2);
		}
		else if (n2 <= n3 && n3 <= n1){
			printf("el orden de menor a mayor es: %d %d %d \n",n2, n3, n1);
		}
		else if (n3 <= n1 && n1 <= n2){
			printf("el orden de menor a mayor es: %d %d %d \n",n3, n2, n1);
	}
	getche();
}
