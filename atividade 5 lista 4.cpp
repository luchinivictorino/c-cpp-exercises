/*Lista 03 5. Declare um vetor de 10 posi��es e o
preencha com os 10 primeiros n�meros impares e o 
escreva */

#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream>//inclus�o da biblioteca mais completa
#include<locale.h>
#include<stdlib.h>
#include<time.h>//srand()
#include<string.h>
//declara��o vari�veis 
int Vetor[10];
int Valor;
char opc;

//In�cio
main(){ //comando da estrutura - Escopo - principal do programa
setlocale (LC_ALL,"Portuguese");

do{//la�o de repeti��o para ficar no programa

//entrada - Preecher o vetor
printf("\n Gera��o dos 10 valores inteiros �mpares 0-20");
printf("\n \n");
srand(time(NULL));//para evitar de repetir os mesmos n�meros
//int cont=0;

Vetor[0]=1;
printf("\n Vetor[%i] = %i \n",0,Vetor[0]);
for(int i=1;i<10;i++){
	Vetor[i]=Vetor[i-1]+2;
	/*Valor =  rand() % 20+1;
	if(Valor % 2 == 0){
	  Valor=Valor;
	  i--;
	  }
	  else{if (Valor!=Vetor[cont]){
	  	Vetor[cont]=Valor;
	  printf("\n Vetor[%i] = %i \n",cont,Vetor[cont]);
	  cont++;}
	  }}*/
	printf("\n Vetor[%i] = %i \n",i,Vetor[i]);  }
	//preechendo os vetores aleatoriamente
printf("\n \n");
printf("\n Deseja continuar com novos valores <S> ou <N>");
opc=getche();
opc=toupper(opc);}while(opc != 'N');
}//final do algortimo
	
