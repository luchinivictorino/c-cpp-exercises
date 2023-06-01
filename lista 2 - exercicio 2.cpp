/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//declaração de variáveis

int QtidadeCavalos;
int TotalFerraduras;


//Início
main(){
	setlocale(LC_ALL,"portuguese");//usar a língua portuguesa
	system("cls");
	printf("\n Digite a quantidade de cavalos do haras: ");
	scanf("%i",&QtidadeCavalos);
	
	TotalFerraduras = QtidadeCavalos * 4;
	printf("\n O haras tem no total %i cavalo(s): ",QtidadeCavalos);
	printf("\n A quantidade de Ferraduras é %i ",TotalFerraduras);
	
}

