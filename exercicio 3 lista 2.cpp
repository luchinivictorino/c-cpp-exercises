/*3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

int Paes,Broas;
float TotalPaes,TotalBroas,TotalDia;
float Deposito;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Quantos pães foram vendidos hoje? ",Paes);
	scanf("%i",&Paes);
	printf("\n Quantas broas foram vendidas hoje? ",Broas);
	scanf("%i",&Broas);
	
	TotalPaes = (Paes * 0.12);
	TotalBroas = (Broas * 1.5);
	TotalDia = TotalPaes + TotalBroas;
	Deposito = TotalDia * 0.10;
	
	printf("\n Hoje foram arrecadados %.2f reais. ",TotalDia);
	printf("\n O valor a ser depositado na poupança é: %.2f reais",Deposito);
	
}
