/*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS 5.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

char Nome[30];
int Idade,DiasVivo;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira seu nome: ",Nome);
	scanf("%s",&Nome);
	printf("\n Insira sua idade: ",Idade);
	scanf("%i",&Idade);
	
	DiasVivo = (Idade * 365);
	printf("\n %s, você possui %i dias de vida.",Nome,DiasVivo);
}
	
	
	
	
	
	
