/*Ejercicio 13: Dada una lista de N n�meros enteros y dos valores enteros, A y B. Se pide informar cu�ntos n�meros naturales de la lista son s�lo m�ltiplo de A y cu�ntos son m�ltiplos s�lo de B.*/
#include <stdio.h>
int main() {
	int n,a,b,contA,contB,i,aux; /*variables a utilizar*/
	printf("\nPor favor ingresar el valor de N: "); /*Ingreso*/
	scanf("%d",&n);
	printf("\nPor favor ingresar el valor de A: ");
	scanf("%d",&a);
	printf("\nPor favor ingresar el valor de B: ");
	scanf("%d",&b);
	contA=0;contB=0; /*defino los contadores para luego incrementar sin basura de memoria*/
	for(i=1;i<=n;i++){
		printf("\nPor favor ingresar un numero entero: ");
		scanf("%d",&aux);
		if(aux%a==0) /*si el resto de la division entera entre el ingresado y el valor a evaluar es 0, son multiplos*/
			contA++;
		else if(aux%b==0)
			contB++;
	}
	printf("\nDe los numeros ingresados, %d son multiplos de %d y %d son multiplos de %d",contA,a,contB,b);
	return 0;
}

