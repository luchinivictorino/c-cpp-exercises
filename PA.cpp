/*5 � Algoritmo PA � Progress�o Aritm�tica
Fa�a um programa que imprima os elementos de uma PA e o somat�rio da mesma dados :
primeiro termo , numero de termos e raz�o.*/

//chamada das bibliotecas
#include<conio.h>//biblioteca que cont�m os comandos io input e output
#include<stdio.h>//biblioteca que cont�m os comandos de input e output
#include<iostream>//comandos diversos e cont�m outras bibliotecas dentro dele
#include<locale.h>//comandos de localiza��o de linguagem

//declarar as vari�veis

int an,a1,ntermos,r,SomaPa;

//In�cio - Come�a o c�digo
main(){//escopo de programa principal
	setlocale(LC_ALL,"portuguese");//uso do portugu�s nos textos
	system("cls");//limpa tela - Clear screen
	//entrada de dados
	printf("\n Digite o valor do a1:");//mostra na tela
	scanf("%i",&a1);//l� do teclado para a vari�vel
	printf("\n Digite a quantidade de ntermos:");//mostra na tela
	scanf("%i",&ntermos);//l� do teclado para a vari�vel
	printf("\n Digite o valor da raz�o r:");//mostra na tela
	scanf("%i",&r);//l� do teclado para a vari�vel
	//processamento - PA e sa�da
	SomaPa=a1;//joga o valor de a1 para acumular em SomaPa
	printf("a1:%i \t",a1);//mostro na tela o primeiro elemento a1
	for(int i=2;i<=ntermos;i++){//gera os pr�ximos elementos
		an=a1+(i-1)*r;
		printf("a%i:%i \t",i,an);
		SomaPa=SomaPa+an;}
	printf("\n SomaPa: %i",SomaPa);
	printf("\n\n");
	system("pause");
		
		//sa�da do Resultado
	
}//fecha algor�tmo


