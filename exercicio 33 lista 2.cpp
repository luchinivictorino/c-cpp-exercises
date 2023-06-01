/*33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base
maior + base menor) * altura) /2.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float BaseMenor,BaseMaior,Altura,AreaTotal;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o valor da base menor em centímetros: ");
	scanf("%f",&BaseMenor);
	printf("\n Insira o valor da base maior em centímetros: ");
	scanf("%f",&BaseMaior);
	printf("\n Insira a altura em centímetros: ");
	scanf("%f",&Altura);
	
	AreaTotal = ((BaseMenor + BaseMaior) * Altura) / 2;
	
	printf("\n A área total do trapézio é %.2f cm.",AreaTotal);
}
