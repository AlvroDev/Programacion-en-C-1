/*Ejercicio 15: Dada una lista de N n�meros, se desea obtener el promedio de los n�meros que est�n formados �nicamente con d�gitos pares.
a. Considerar que la lista es de n�meros enteros.
b. Considerar que la lista es de n�meros reales positivos.
Nota: �Existe alguna diferencia en el dise�o de la soluci�n entre el inciso a y b?. �C�mo es el comportamiento del componente para separar d�gitos en el inciso b?*/
#include <stdio.h>
int main() {
	int n,dig,num,aux,cont,i,b;
	float prom;
	printf("\nPor favor ingrese el valor de N: ");
	scanf("%d",&n);
	prom=0;
	cont=0;
	for(i=1;i<=n;i++){          /*Este caso comentado ser�a la consigna a, considerando la lista como un ingreso de numeros enteros.*/
		b=1;
		printf("\nPor favor ingrese un entero: ");
		scanf("%d",&num);
		aux=num;
		while(aux!=0 && b==1){ /*Componente separador de digitos*/
			dig=aux%10;
			if(dig%2==0) /*para saber si el digito es para y seguir con la separacion*/
				aux=aux/10;
			else
				b=0;  /*si no es par salir del ciclo mediante bandera*/
		}
		if(b==1){ /*si la bandera nunca cambio, es decir que es conformado por digitos pares, sumar al promedio*/			
			cont++;
			prom=prom+num;
		}
	}
	prom=prom/cont;
	printf("\nEl promedio de los numeros formados por digitos pares es: %f",prom);
	return 0;
}
