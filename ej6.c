/*Ejercicio 10: Se desea calcular el importe a pagar por el consumo de agua de una familia, sabiendo
que dicho importe se calcula de la siguiente manera:
-un valor b�sico que cubre los primeros 1000 mts c�bicos o menos, siendo �ste un valor �nico.
-los metros c�bicos que exceden de 1000 tienen una tarifa que se calcula en funci�n del valor de
exceso por cada metro c�bico mayor a 1000, siempre que sea menor a 2000. En caso de que la
cantidad de metros c�bicos consumida exceda o sea igual a 2000 metros c�bicos, el valor por cada
metro c�bico excedido se calcula como el doble del valor de exceso por metro c�bico de 1000.*/
#include <stdio.h>
int main() {
	int mtsC,op;
	const int tarifaB=10; /*Constante de taifa*/
	printf("\nPor favor ingrese la cantidad de mts cubicos: ");
	scanf("%d",&mtsC); /*Ingreso de los metros a calcula*/
	if(mtsC>=1000){ 
		if(mtsC>=2000){
			op=((mtsC-2000)/tarifaB)*2+(2*tarifaB); /*la variable de operacion calculando el extra mayor a 2000 junto a la tarifa*/
		}
		else op=tarifaB+((mtsC-1000)/tarifaB); /*la variable de operacion calculando el extra mayor a 1000 junto a la tarifa*/
	}
	else op=mtsC/tarifaB; /*si es menor a 1000 solo calcular con la division*/
	printf("\nLa tarifa a pagar es: $%d",op);
	return 0;
}

