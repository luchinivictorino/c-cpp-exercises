/*16. A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias
de queijo, uma fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de
queijo ou presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 100 gramas, fa�a um
algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer, e a m�quina informe as
quantidades (em quilos) de queijo, presunto e carne necess�rios para compra.*/

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
	
	printf("\n Quantos sandu�ches ser�o feitos? ",Sanduiche);
	scanf("%i",&Sanduiche);
	
	Queijo = 0.05;
	Presunto = 0.05;
	Hamburguer = 0.1;
	QQueijo = Sanduiche * Queijo;
	QPresunto = Sanduiche * Presunto;
	QHamburguer = Sanduiche * Hamburguer;
	
	printf("\n A quantidade de queijo ser�: %.2f quilos",QQueijo);
	printf("\n A quantidade de presunto ser�: %.2f quilos",QPresunto);
	printf("\n A quantidade de hamburger ser�: %.2f quilos",QHamburguer);
}
