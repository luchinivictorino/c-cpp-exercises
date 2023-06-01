/*28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas
notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float N1,N2,Media;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira a primeira nota: ");
	scanf("%f",&N1);
	printf("\n Insira a segunda nota: ");
	scanf("%f",&N2);
	
	Media = ((N1 * 2)+(N2 * 3))/(2 + 3);
	
	printf("\n A média ponderada do respectivo aluno é: %.2f",Media);
	
}
