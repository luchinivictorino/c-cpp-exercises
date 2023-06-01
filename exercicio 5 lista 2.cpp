/*5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.*/


#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Reais,PrecoLitro,LitrosAbastecidos;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Qual será a quantia em reais que será colocada? ",Reais);
	scanf("%f",&Reais);
	printf("\n Qual é o preço da gasolina hoje? ",PrecoLitro);
	scanf("%f",&PrecoLitro);
	
	LitrosAbastecidos = Reais / PrecoLitro;
	printf("\n A quantidade de litros a serem colocados no tanque é %.2f. ",LitrosAbastecidos);
}
