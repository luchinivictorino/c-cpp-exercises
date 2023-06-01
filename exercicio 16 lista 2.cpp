/*16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias
de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de
queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um
algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as
quantidades (em quilos) de queijo, presunto e carne necessários para compra.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Queijo,Presunto,Hamburguer;
float QQueijo,QPresunto,QHamburguer;
int Sanduiche;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Quantos sanduíches serão feitos? ",Sanduiche);
	scanf("%i",&Sanduiche);
	
	Queijo = 0.05;
	Presunto = 0.05;
	Hamburguer = 0.1;
	QQueijo = Sanduiche * Queijo;
	QPresunto = Sanduiche * Presunto;
	QHamburguer = Sanduiche * Hamburguer;
	
	printf("\n A quantidade de queijo será: %.2f quilos",QQueijo);
	printf("\n A quantidade de presunto será: %.2f quilos",QPresunto);
	printf("\n A quantidade de hamburger será: %.2f quilos",QHamburguer);
}
