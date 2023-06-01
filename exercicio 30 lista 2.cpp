/*30. Um funcionário recebe um salário fixo
mais 4% de comissão sobre as vendas. Faça um algoritmo que receba o salário fixo de um
funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Salario,Vendas,SalarioFinal,ValorVendas;
char Nome[30];

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o nome do funcionário: ");
	scanf("%s",&Nome[30]);
	printf("\n Insira o salário: ");
	scanf("%f",&Salario);
	printf("\n Insira o valor das vendas do mesmo: ");
	scanf("%f",&Vendas);
	
	ValorVendas = Vendas * 0.04;
	SalarioFinal = Salario + ValorVendas;
	
	printf("\n O salário final será de %.2f reais",SalarioFinal);
}
