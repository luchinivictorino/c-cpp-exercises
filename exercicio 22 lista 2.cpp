/*22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor
total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e
ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float TotalMoeda1,TotalMoeda5,TotalMoeda10,TotalMoeda25,TotalMoeda50,TotalMoeda1real;
float CentavoTotal,DinheiroTotal;
int Moeda1,Moeda5,Moeda10,Moeda25,Moeda50,Moeda1real;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o número de moedas de 1 centavo: ");
	scanf("%i",&Moeda1);
	printf("\n Insira o número de moedas de 5 centavos: ");
	scanf("%i",&Moeda5);
	printf("\n Insira o número de moedas de 10 centavos: ");
	scanf("%i",&Moeda10);
	printf("\n Insira o número de moedas de 25 centavos: ");
	scanf("%i",&Moeda25);
	printf("\n Insira o número de moedas de 50 centavos: ");
	scanf("%i",&Moeda50);
	printf("\n Insira o número de moedas de 1 real: ");
	scanf("%i",&Moeda1real);
	
	TotalMoeda1 = Moeda1 * 1;
	TotalMoeda5 = Moeda5 * 5;
	TotalMoeda10 = Moeda10 * 10;
	TotalMoeda25 = Moeda25 * 25;
	TotalMoeda50 = Moeda50 * 50;
	TotalMoeda1real = Moeda1real * 100;
	
	CentavoTotal = TotalMoeda1 + TotalMoeda5 + TotalMoeda10 + TotalMoeda25 + TotalMoeda50 + TotalMoeda1real;
	DinheiroTotal = CentavoTotal / 100;
	
	printf("\n O total de dinheiro que você possui, em reais, é: %.2f",DinheiroTotal);
	
	
	
	
}
