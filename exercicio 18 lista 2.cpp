/*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora
extra. Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um
determinado funcion�rio. Considere que o sal�rio l�quido � igual ao sal�rio bruto descontando-
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
	
	printf("\n O sal�rio bruto � de %.2f reais e o sal�rio l�quido � de %.2f reais.",SalarioBruto,SalarioLiquido);
}
