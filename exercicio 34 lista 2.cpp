/*34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado *
lado;*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Lado,AreaTotal;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Informe o valor do lado em centímetros: ",Lado);
	scanf("%f",&Lado);
	
	AreaTotal = (Lado * Lado);
	printf("\n A área do quadrado é: %.2f cm",AreaTotal);
}
