/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que contém os comandos io input e output
#include<stdio.h>//biblioteca que contém os comandos de input e output
#include<iostream>//comandos diversos e contém outras bibliotecas dentro dele
#include<locale.h>//comandos de localização de linguagem

//declarar as variáveis

float Comprimento,Largura,AreaTerreno;

//Início - Começa o código
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do portugês nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o comprimento do terreno:");//mostra na tela
	scanf("%f",&Comprimento);//lê do teclado para a variável
	printf("\n Digite a largura do terreno:");//mostra na tela
	scanf("%f",&Largura);//lê do teclado para a variável
	//processamento - Cálculo do terreno
	AreaTerreno = Comprimento*Largura;
	printf("\n O comprimento do Terreno é: %.2f metros",Comprimento);
	printf("\n A largura do Terreno é: %.2f metros",Largura);
	printf("\n A Área do Terreno é: %.2f metros²",AreaTerreno);
	printf("\n\n");
	system("pause");
		
	
}//fecha algorítmo


