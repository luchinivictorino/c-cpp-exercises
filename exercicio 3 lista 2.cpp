/*3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de
broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar
numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos
para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de
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
	
	printf("\n Quantos p�es foram vendidos hoje? ",Paes);
	scanf("%i",&Paes);
	printf("\n Quantas broas foram vendidas hoje? ",Broas);
	scanf("%i",&Broas);
	
	TotalPaes = (Paes * 0.12);
	TotalBroas = (Broas * 1.5);
	TotalDia = TotalPaes + TotalBroas;
	Deposito = TotalDia * 0.10;
	
	printf("\n Hoje foram arrecadados %.2f reais. ",TotalDia);
	printf("\n O valor a ser depositado na poupan�a �: %.2f reais",Deposito);
	
}
