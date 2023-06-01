/*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora
extra. Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
determinado funcionário. Considere que o salário líquido é igual ao salário bruto descontando-
se 10% de impostos.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float HoraNormal,HoraExtra,SalarioBruto,SalarioLiquido;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o total de horas normais trabalhadas: ",HoraNormal);
	scanf("%f",&HoraNormal);
	printf("\n Insira o total de horas extras trabalhadas: ",HoraExtra);
	scanf("%f",&HoraExtra);
	
	SalarioBruto = (HoraNormal * 10.00) + (HoraExtra * 15.00);
	SalarioLiquido = SalarioBruto - (SalarioBruto * 0.10);
	
	printf("\n O salário bruto é de %.2f reais e o salário líquido é de %.2f reais.",SalarioBruto,SalarioLiquido);
}
