/*37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

int Numero,Valor1,Valor2,Valor3,Valor4,Valor5,Valor6,Valor7,Valor8,Valor9,Valor10;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o número desejado: ");
	scanf("%i",&Numero);
	
	Valor1 = Numero * 1;
	Valor2 = Numero * 2;
	Valor3 = Numero * 3;
	Valor4 = Numero * 4;
	Valor5 = Numero * 5;
	Valor6 = Numero * 6;
	Valor7 = Numero * 7;
	Valor8 = Numero * 8;
	Valor9 = Numero * 9;
	Valor10 = Numero * 10;
	
	printf("\n %i * 1 = %i",Numero,Valor1);
	printf("\n %i * 2 = %i",Numero,Valor2);
	printf("\n %i * 3 = %i",Numero,Valor3);
	printf("\n %i * 4 = %i",Numero,Valor4);
	printf("\n %i * 5 = %i",Numero,Valor5);
	printf("\n %i * 6 = %i",Numero,Valor6);
	printf("\n %i * 7 = %i",Numero,Valor7);
	printf("\n %i * 8 = %i",Numero,Valor8);
	printf("\n %i * 9 = %i",Numero,Valor9);
	printf("\n %i * 10 = %i",Numero,Valor10);
}

