/*27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro
n�mero pelo segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o �
necess�rio se preocupar com valida��es.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float Dividendo,Divisor,Resultado;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o dividendo (o de cima): ");
	scanf("%f",&Dividendo);
	printf("\n Insira o divisor (o de baixo): ");
	scanf("%f",&Divisor);
	
	Resultado = Dividendo / Divisor;
	
	printf("\n O resultado da divis�o �: %.2f",Resultado);
}
