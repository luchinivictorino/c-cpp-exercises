/*2 - Desenvolver um programa que tenha um menu de:
2.1 - Entrada de dados dos vetores VetorA[5] e VetorB[5] com valores inteiros;
2.2 - Soma dos elementos dos dois vetores gerando o VetorSoma[5];
2.3 – Subtração dos elementos dos dois vetores gerando o VetorSoma[5];
2.4 - Multiplicação dos elementos dos dois vetores gerando o VetorMulti[5];
2.5 – Divisão dos elementos dos dois vetores gerando o VetorDivi[5];
2.6 - Sair do Sistema*/

#include<conio.h> 
#include<stdio.h> 
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

//menu
int opc;
//2.2
int VetA[5],VetB[5],VetSoma[5];
//2.3
int VetAs[5],VetBs[5],VetSub[5];
//2.4
int VetAm[5],VetBm[5],VetMulti[5];
//2.5
int VetAd[5],VetBd[5],VetDiv[5];

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");

	Menu: 
	printf("\n Menu de Opções");
	printf("\n 1 - Soma.");
	printf("\n 2 - Subtração.");
	printf("\n 3 - Multiplicação.");
	printf("\n 4 - Divisão.");
	printf("\n 5 - Sair do sistema.");
	printf("\n\n Digite a opção desejada: ");
	scanf("%i",&opc); 
	
switch (opc){
	case 1:{printf("\n Soma de dois vetores:");
		printf("\n\n Entrada Vetor 1");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetA[i]);}
			
		printf("\n");
					
		printf("\n Entrada Vetor 2");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetB[i]);}
			
		printf("\n");
		printf("\n Soma dos vetores:");	
			for(int i=0;i<5;i++){
				VetSoma[i] = VetA[i] + VetB[i];
				printf("\n Soma[%i] = %i",i+1,VetSoma[i]);}
		
		printf("\n");		
		printf("\n Tecle enter para voltar ao menu.");
		getche();
		system("cls");
		goto Menu;
		
		break;
		}
	case 2:{printf("\n Subtração de dois vetores:");
		printf("\n\n Entrada Vetor 1");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetAs[i]);}
			
		printf("\n");
					
		printf("\n Entrada Vetor 2");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetBs[i]);}
			
		printf("\n");
		printf("\n Subtração dos vetores:");	
			for(int i=0;i<5;i++){
				VetSub[i] = VetAs[i] - VetBs[i];
				printf("\n Soma[%i] = %i",i+1,VetSub[i]);}
		
		printf("\n");		
		printf("\n Tecle enter para voltar ao menu.");
		getche();
		system("cls");
		goto Menu;
		
		break;
		}
	case 3:{printf("\n Multiplicação de dois vetores:");
		printf("\n\n Entrada Vetor 1");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetAm[i]);}
			
		printf("\n");
					
		printf("\n Entrada Vetor 2");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetBm[i]);}
			
		printf("\n");
		printf("\n Multiplicação dos vetores:");	
			for(int i=0;i<5;i++){
				VetMulti[i] = VetAm[i] * VetBm[i];
				printf("\n Soma[%i] = %i",i+1,VetMulti[i]);}
		
		printf("\n");		
		printf("\n Tecle enter para voltar ao menu.");
		getche();
		system("cls");
		goto Menu;
		
		break;
		}
	case 4:{printf("\n Divisão de dois vetores:");
		printf("\n\n Entrada Vetor 1");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetAd[i]);}
			
		printf("\n");
					
		printf("\n Entrada Vetor 2");
			for(int i=0;i<5;i++){
				printf("\n Entre com o valor inteiro Valor[%i]: ",i+1);
				scanf("%i",&VetBd[i]);}
			
		printf("\n");
		printf("\n Divisão dos vetores:");	
			for(int i=0;i<5;i++){
				VetDiv[i] = VetAd[i] / VetBd[i];
				printf("\n Soma[%i] = %i",i+1,VetDiv[i]);}
		
		printf("\n");		
		printf("\n Tecle enter para voltar ao menu.");
		getche();
		system("cls");
		goto Menu;
		break;
		}
	case 5:{exit(0);
		break;
		}
	default:{
		system("cls");
		goto Menu;
		}	
}
}
