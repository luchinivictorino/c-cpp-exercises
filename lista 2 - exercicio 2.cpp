/*2. Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os
cavalos comprados para um haras.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//declara��o de vari�veis

int QtidadeCavalos;
int TotalFerraduras;


//In�cio
main(){
	setlocale(LC_ALL,"portuguese");//usar a l�ngua portuguesa
	system("cls");
	printf("\n Digite a quantidade de cavalos do haras: ");
	scanf("%i",&QtidadeCavalos);
	
	TotalFerraduras = QtidadeCavalos * 4;
	printf("\n O haras tem no total %i cavalo(s): ",QtidadeCavalos);
	printf("\n A quantidade de Ferraduras � %i ",TotalFerraduras);
	
}

