/*4 – Algoritmo 3 Menores
Faça um algoritmo que leia 3 números inteiros e imprima o menor deles.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que contém os comandos io input e output
#include<stdio.h>//biblioteca que contém os comandos de input e output
#include<iostream>//comandos diversos e contém outras bibliotecas dentro dele
#include<locale.h>//comandos de localização de lingagem

//declarar as variáveis

int N1,N2,N3,NMenor;

//Início - Começa o código
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do portugês nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o valor do N1:");//mostra na tela
	scanf("%i",&N1);//lê do teclado para a variável
	printf("\n Digite o valor de N2:");//mostra na tela
	scanf("%i",&N2);//lê do teclado para a variável
	printf("\n Digite o valor de N3:");//mostra na tela
	scanf("%i",&N3);//lê do teclado para a variável
	//processamento - localizar o menor dos 3 números
	if((N1 < N2) && (N1 < N3)){
		NMenor=N1;
	}
	if((N2 < N1) && (N2 < N3)){
		NMenor=N2;
	}
	if((N3 < N1) && (N3 < N2)){
		NMenor=N3;
	}
	//saída do Resultado
	
	printf("\n N1:%i, N2:%i, N3:5i",N1,N2,N3);
	printf("\n O Menor Número é: %i", NMenor);
	printf("\n\n");
	system("pause");
	
}//fecha algorítmo


