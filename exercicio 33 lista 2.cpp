/*33. Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = (base
maior + base menor) * altura) /2.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float BaseMenor,BaseMaior,Altura,AreaTotal;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o valor da base menor em cent�metros: ");
	scanf("%f",&BaseMenor);
	printf("\n Insira o valor da base maior em cent�metros: ");
	scanf("%f",&BaseMaior);
	printf("\n Insira a altura em cent�metros: ");
	scanf("%f",&Altura);
	
	AreaTotal = ((BaseMenor + BaseMaior) * Altura) / 2;
	
	printf("\n A �rea total do trap�zio � %.2f cm.",AreaTotal);
}
