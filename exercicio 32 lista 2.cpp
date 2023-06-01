/*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
em gramas.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Peso,PesoGramas;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o peso do indivíduo em quilos: ");
	scanf("%f",&Peso);
	
	PesoGramas = Peso * 1000;
	
	printf("\n O peso do indivíduo é %.2f gramas.",PesoGramas);
}
