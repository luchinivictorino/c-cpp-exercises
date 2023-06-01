/*29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
sabendo-se que este sofreu um desconto de 10%.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Preco,Desconto;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o preço do produto: ");
	scanf("%f",&Preco);
	
	Desconto = Preco * 0.90;
	
	printf("\n O preço do produto após o desconto é de %.2f reais.",Desconto);
	
}
