/*29. Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o,
sabendo-se que este sofreu um desconto de 10%.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Preco,Desconto;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o pre�o do produto: ");
	scanf("%f",&Preco);
	
	Desconto = Preco * 0.90;
	
	printf("\n O pre�o do produto ap�s o desconto � de %.2f reais.",Desconto);
	
}
