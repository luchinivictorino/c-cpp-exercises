/*1 - Algoritmo do Triangulo
Fa�a um algoritmo para ler a base e a altura de um tri�ngulo. Em seguida, escreva a �rea do
mesmo. �rea = (Base * Altura) / 2.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float base,altura,AreaTriangulo;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Digite o valor da base:");
	scanf("%f",&base);
	printf("\n Digite o valor da altura:");
	scanf("%f",&altura);
	
	AreaTriangulo=base*altura/2;
	printf("\n A base do tri�ngulo �: %.2f cm",base);
	printf("\n A altura do tri�ngulo �: %.2f cm",altura);
	printf("\n A �rea do tri�ngulo �: %.2f cm�",AreaTriangulo);
	printf("\n\n");
	system("pause");	
}
