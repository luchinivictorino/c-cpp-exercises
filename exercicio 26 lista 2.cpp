/*26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses
n�meros.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float Valor1,Valor2,Valor3,Resultado;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o primeiro valor: ");
	scanf("%f",&Valor1);
	printf("\n Insira o segundo valor: ");
	scanf("%f",&Valor2);
	printf("\n Insira o terceiro valor: ");
	scanf("%f",&Valor3);
	
	Resultado = Valor1 * Valor2 * Valor3;
	
	printf("\n O resultado da opera��o �: %.2f",Resultado);
}
