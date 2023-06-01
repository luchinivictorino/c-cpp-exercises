/*5 – Algoritmo PA – Progressão Aritmética
Faça um programa que imprima os elementos de uma PA e o somatório da mesma dados :
primeiro termo , numero de termos e razão.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que contém os comandos io input e output
#include<stdio.h>//biblioteca que contém os comandos de input e output
#include<iostream>//comandos diversos e contém outras bibliotecas dentro dele
#include<locale.h>//comandos de localização de linguagem

//declarar as variáveis

int an,a1,ntermos,r,SomaPa;

//Início - Começa o código
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do português nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o valor do a1:");//mostra na tela
	scanf("%i",&a1);//lê do teclado para a variável
	printf("\n Digite a quantidade de ntermos:");//mostra na tela
	scanf("%i",&ntermos);//lê do teclado para a variável
	printf("\n Digite o valor da razão r:");//mostra na tela
	scanf("%i",&r);//lê do teclado para a variável
	//processamento - PA e saída
	SomaPa=a1;//joga o valor de a1 para acumular em SomaPa
	printf("a1:%i \t",a1);//mostro na tela o primeiro elemento a1
	for(int i=2;i<=ntermos;i++){//gera os próximos elementos
		an=a1+(i-1)*r;
		printf("a%i:%i \t",i,an);
		SomaPa=SomaPa+an;}
	printf("\n SomaPa: %i",SomaPa);
	printf("\n\n");
	system("pause");
		
		//saída do Resultado
	
}//fecha algorítmo


