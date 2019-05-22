#include <stdio.h>
#include <conio.h>

main () {
	float km1,km2,km3,lts1,lts2,lts3,distancia1,distancia2,distancia3;
	
	printf("Ingrese el rendimiento de combustible del vehiculo numero 1 \n");
	scanf("%f",&km1);
	printf("Ingrese la capacidad del tanque del vehiculo numero 1 \n");
	scanf("%f",&lts1);
	printf("Ingrese el rendimiento de combustible del vehiculo numero 2 \n");
	scanf("%f",&km2);
	printf("Ingrese la capacidad del tanque del vehiculo numero 2 \n");
	scanf("%f",&lts2);
	printf("Ingrese el rendimiento de combustible del vehiculo numero 3 \n");
	scanf("%f",&km3);
	printf("Ingrese la capacidad del tanque del vehiculo numero 3 \n");
	scanf("%f",&lts3);
	
	distancia1= (km1*lts1);
	distancia2= (km2*lts2);
	distancia3= (km3*lts3);
	
	if ((distancia1>distancia2)&&(distancia1>distancia3)) {
		printf("La mayor distancia puede ser recorrida por el vehiculo numero 1 y es de %f km \n",distancia1);
		getche();
	}
		else if ((distancia2>distancia1)&&(distancia2>distancia3)) {
			printf("La mayor distancia puede ser recorrida por el vehiculo numero 2 y es de %f km \n",distancia2);
		getche();
		}
		else if ((distancia3>distancia1)&&(distancia3>distancia2)) {
			printf("La mayor distancia puede ser recorrida por el vehiculo numero 3 y es de %f km \n",distancia3);
		getche();
		}
		else {
			printf("La mayor distancia puede ser recorrida por los tres vehiculos y es de %f km \n",distancia1);
			getche();
		}
		
}
