/*27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro
número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é
necessário se preocupar com validações.*/

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
	
	printf("\n O resultado da divisão é: %.2f",Resultado);
}
