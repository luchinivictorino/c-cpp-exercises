/*5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o pre�o do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.*/


#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Reais,PrecoLitro,LitrosAbastecidos;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Qual ser� a quantia em reais que ser� colocada? ",Reais);
	scanf("%f",&Reais);
	printf("\n Qual � o pre�o da gasolina hoje? ",PrecoLitro);
	scanf("%f",&PrecoLitro);
	
	LitrosAbastecidos = Reais / PrecoLitro;
	printf("\n A quantidade de litros a serem colocados no tanque � %.2f. ",LitrosAbastecidos);
}
