/*1 - Algoritmo do Triangulo
Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do
mesmo. Área = (Base * Altura) / 2.*/

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
	printf("\n A base do triângulo é: %.2f cm",base);
	printf("\n A altura do triângulo é: %.2f cm",altura);
	printf("\n A área do triângulo é: %.2f cm²",AreaTriangulo);
	printf("\n\n");
	system("pause");	
}
