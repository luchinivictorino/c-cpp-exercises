/*1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as
dimens�es de um terreno e depois exibir a �rea do terreno.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que cont�m os comandos io input e output
#include<stdio.h>//biblioteca que cont�m os comandos de input e output
#include<iostream>//comandos diversos e cont�m outras bibliotecas dentro dele
#include<locale.h>//comandos de localiza��o de linguagem

//declarar as vari�veis

float Comprimento,Largura,AreaTerreno;

//In�cio - Come�a o c�digo
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do portug�s nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o comprimento do terreno:");//mostra na tela
	scanf("%f",&Comprimento);//l� do teclado para a vari�vel
	printf("\n Digite a largura do terreno:");//mostra na tela
	scanf("%f",&Largura);//l� do teclado para a vari�vel
	//processamento - C�lculo do terreno
	AreaTerreno = Comprimento*Largura;
	printf("\n O comprimento do Terreno �: %.2f metros",Comprimento);
	printf("\n A largura do Terreno �: %.2f metros",Largura);
	printf("\n A �rea do Terreno �: %.2f metros�",AreaTerreno);
	printf("\n\n");
	system("pause");
		
	
}//fecha algor�tmo


