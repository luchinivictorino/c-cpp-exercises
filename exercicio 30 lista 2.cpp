/*30. Um funcion�rio recebe um sal�rio fixo
mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba o sal�rio fixo de um
funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Salario,Vendas,SalarioFinal,ValorVendas;
char Nome[30];

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o nome do funcion�rio: ");
	scanf("%s",&Nome[30]);
	printf("\n Insira o sal�rio: ");
	scanf("%f",&Salario);
	printf("\n Insira o valor das vendas do mesmo: ");
	scanf("%f",&Vendas);
	
	ValorVendas = Vendas * 0.04;
	SalarioFinal = Salario + ValorVendas;
	
	printf("\n O sal�rio final ser� de %.2f reais",SalarioFinal);
}
