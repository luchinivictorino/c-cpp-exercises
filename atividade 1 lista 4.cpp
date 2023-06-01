/*1 - Construa um programa em C/C++ que tenha as seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores aleatórios 0-100 e na
sequência selecione aleatoriamente três posições/índices deste vetor e
apresente os seus valores e a multiplicação destes.
1.2 - Leia dois vetores de 5 posições com valores inteiros cada e gere um
terceiro com os resultados da soma dos valores sendo a lógica: soma o 1a
elemento do 1o vetor com o 5o elemento do 2o vetor, 2a elemento do 1o vetor
com o 4o elemento do 2o vetor, e assim sucessivamente.
1.3 - Construa um vetor de 13 posições com valores caracteres aleatórios e na
sequência pedir para o usuário digitar um caractere e localizar onde este está
no vetor e quantas vezes aparece.*/

#include<conio.h> 
#include<stdio.h> 
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

//menu
int opc;

//1.1
int vetor[10];
int Multi,I1,I2,I3;

//1.2
int vet1[5],vet2[5],vetsoma[5];

//1.3
char vet[13];
char caracter;
int qtasvezes;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	srand(time(NULL));

	Menu: 
	printf("\n Menu de Opções");
	printf("\n 1 - 10 valores aleatórios e multiplicação entre 3 deles.");
	printf("\n 2 - 2 vetores de 5 posições e a soma entre eles.");
	printf("\n 3 - 13 números aleatórios e indicação do número escolhido.");
	printf("\n 4 - Sair do sistema");
	printf("\n\n Digite a opção desejada: ");
	scanf("%i",&opc); 

switch (opc){
	case 1:{printf("\n 10 valores aleatórios de 0 a 100:");
	
			for(int i=0;i<10;i++){
			vetor[i]= rand() % 101;
			printf("\n vetor[%i] = %i",i+1,vetor[i]);}//+1 pra contagem começar no 1 e não no 0
			
			printf("\n");
			printf("\n Escolha um índice do vetor: ");
			scanf("%i",&I1);
			printf("\n Escolha um índice do vetor: ");
			scanf("%i",&I2);
			printf("\n Escolha um índice do vetor: ");
			scanf("%i",&I3);
			
			Multi = I1 * I2 * I3;
			
			printf("\n A multiplicação dos valores dos 3 índices é: %i ",Multi);
			
			printf("\n\n Tecle enter para voltar ao menu.");
			getche();
			system("cls");
		goto Menu;
		break;
	}
	case 2:{printf("\n 2 vetores de 5 posições e a soma entre eles:");
				
			printf("\n Entrada Vetor 1");
				for(int i=0;i<5;i++){
					printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
					scanf("%i",&vet1[i]);}
			
			printf("\n");
					
			printf("\n Entrada Vetor 2");
				for(int i=0;i<5;i++){
					printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
					scanf("%i",&vet2[i]);}
			
			printf("\n");
			printf("\n Soma dos vetores:");	
				for(int i=0;i<5;i++){
					vetsoma[i] = vet1[i] + vet2[4-i];
					printf("\n Soma[%i] = %i",i,vetsoma[i]);}
			
			printf("\n");		
			printf("\n Tecle enter para voltar ao menu.");
			getche();
			system("cls");
		goto Menu;
		break;
	}
	case 3:{printf("\n 13 números aleatórios e indicação do número escolhido:");
				
				for(int i=0;i<13;i++){
					vet[i] = rand() % 101;
					printf("\n vet[%i] = %c",i+1,vet[i]);}
			
			fflush(stdin);		
			printf("\n\n Digite um caracter para verificar no Vetor: ");
			scanf("%c",&caracter);
			fflush(stdin);
			
				int flag = 0;
				qtasvezes = 0;
				for(int i=0;i<13;i++){
					if(caracter == vet[i]){
						printf("\n vet[%i] = %c",i+1,vet[i]);
						qtasvezes++;
						flag = 1;
				}}
				
				printf("\n");
				if(flag == 0){
					printf("\n Caracter %c não existe no vetor.",caracter);
				}else{
					printf("\n O caracter %c apareceu %i vezes.",caracter,qtasvezes);
				}
			
			printf("\n\n Tecle enter para voltar ao menu.");
			getche();
			system("cls");
		goto Menu;
		break;
	}
	case 4:{exit(0);
		break;
	}
	default:{
		system("cls");
		goto Menu;
	}	
}
}
