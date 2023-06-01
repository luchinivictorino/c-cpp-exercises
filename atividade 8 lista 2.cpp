/*8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada (as notas tem pesos respectivos de 1, 2 e 3).*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

char NomeAluno[30];
float N1,N2,N3,MediaPonderada;
char op;//opção

main(){
	setlocale(LC_ALL,"portuguese");
	do{//abro o laço de repetição FAÇA ENQUANTO
	system("cls");
	
	printf("\n Digite o nome do aluno: ");
	scanf("%s",&NomeAluno);
	printf("\n Digite a Nota 1: ");
	scanf("%f",&N1);
	printf("\n Digite a Nota 2: ");
	scanf("%f",&N2);
	printf("\n Digite a Nota 3: ");
	scanf("%f",&N3);
	
	MediaPonderada = ((N1 * 1) + (N2 * 2) + (N3 * 3))/(1+2+3);
	
	printf("\n O nome do aluno: %s",NomeAluno);
	printf("\n A N1: %.2f, N2: %.2f e N3: %.2f",N1,N2,N3);
	printf("\n A média ponderada é: %.2f",MediaPonderada);
	
	printf("\n\n");
	
	printf("\n Deseja novos valores? <S> ou <N>",NomeAluno);
	op = getche();//lê o valor da opção S ou N para continuar ou não
	op = toupper(op);//joga o caracter lido em op S ou N para maíusculo
	}while(op !='N');//Fecha o laço de repetição FAÇA ENQUANTO
	
}

