/*4 � Algoritmo 3 Menores
Fa�a um algoritmo que leia 3 n�meros inteiros e imprima o menor deles.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que cont�m os comandos io input e output
#include<stdio.h>//biblioteca que cont�m os comandos de input e output
#include<iostream>//comandos diversos e cont�m outras bibliotecas dentro dele
#include<locale.h>//comandos de localiza��o de lingagem

//declarar as vari�veis

int N1,N2,N3,NMenor;

//In�cio - Come�a o c�digo
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do portug�s nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o valor do N1:");//mostra na tela
	scanf("%i",&N1);//l� do teclado para a vari�vel
	printf("\n Digite o valor de N2:");//mostra na tela
	scanf("%i",&N2);//l� do teclado para a vari�vel
	printf("\n Digite o valor de N3:");//mostra na tela
	scanf("%i",&N3);//l� do teclado para a vari�vel
	//processamento - localizar o menor dos 3 n�meros
	if((N1 < N2) && (N1 < N3)){
		NMenor=N1;
	}
	if((N2 < N1) && (N2 < N3)){
		NMenor=N2;
	}
	if((N3 < N1) && (N3 < N2)){
		NMenor=N3;
	}
	//sa�da do Resultado
	
	printf("\n N1:%i, N2:%i, N3:5i",N1,N2,N3);
	printf("\n O Menor N�mero �: %i", NMenor);
	printf("\n\n");
	system("pause");
	
}//fecha algor�tmo


