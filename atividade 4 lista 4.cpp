/*4 - Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y
quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa dever� 
escrever a soma dos valores encontrados nas respectivas posi��es X e Y.*/

#include<conio.h> 
#include<stdio.h> 
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int vet[12];
int vx,vy,somaxy;

criarVet(){//isso � uma fun��o. pode ser usado o do/while como alternativa.
	for(int i=0;i<12;i++){
		vet[i] = rand() % 101;
		printf("\n vet[%i] = %i",i,vet[i]);
	}
	printf("\n\n Digite um valor para X: ");
	scanf("%i",&vx);
	printf("\n Digite um valor para Y: ");
	scanf("%i",&vy);
}


main (){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	srand(time(NULL));
	
	printf("\n Vetor:");
	criarVet();//chamado da fun��o
	
	if(vx > 11){
		system("CLS");
		printf("\n Valor Incorreto! Digite o valor correto.");
		printf("\n\n Vetor:");
		criarVet();//chamado da fun��o
	}
	if(vy > 11){
		system("CLS");
		printf("Valor Incorreto! Digite o valor correto.");
		printf("\n\n Vetor:");
		criarVet();//chamado da fun��o
	}
	
	somaxy = vet[vx] + vet[vy];
	
	printf("\n O valor da posi��o X � %i.",vet[vx]);
	printf("\n O valor da posi��o Y � %i.",vet[vy]);
	printf("\n O valor da soma � %i.",somaxy);
	
}
