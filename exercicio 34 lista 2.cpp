/*34. Fa�a um algoritmo que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado *
lado;*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Lado,AreaTotal;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Informe o valor do lado em cent�metros: ",Lado);
	scanf("%f",&Lado);
	
	AreaTotal = (Lado * Lado);
	printf("\n A �rea do quadrado �: %.2f cm",AreaTotal);
}
