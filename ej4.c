/*Dados tres n�meros naturales que representan los �ngulos internos de un tri�ngulo, se pide determinar si el tri�ngulo es Rect�ngulo (tiene un �ngulo recto, de 90�), Obtus�ngulo (tiene un �ngulo obtuso, m�s de 90�) o Acut�ngulo (tiene tres �ngulos agudos, menos de 90�).*/
#include <stdio.h>
int main() {
	float a,b,c,op; /*Tipo de dato flotante*/
	op=0; /*Declaraci�n del auxiliar como 0*/
	while(op==0 || op!=180){
		printf("\nPor favor ingresa el valor de los angulos: "); /*Ingreso de los angulos*/
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		op=a+b+c; /*Suma de angulos para ver si cumplen con sumar 180*/
		if(op==180) /*Si no lo hacen se ingresa de nuevo*/
			printf("\nIngreso valido");
		else printf("\nIngreso invalido, intentelo de nuevo");
	}
	if(a==90 || b==90 || c==90) /*Alternativa para angulo recto*/
		printf("\nEs un triangulo rectangulo");
	else 
		if(a>90 || b>90 || c>90) /*Alternativa para angulo menor a 90*/
			printf("\nEs un triangulo obstusangulo");
		else printf("\nEs un triangulo acutangulo"); /*Si no existe angulo mayor a 90*/
	return 0;
}

