/*4 - Leia um vetor de 12 posições e em seguida ler também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include<conio.h> 
#include<stdio.h> 
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int vet[12];
int vx,vy,somaxy;

criarVet(){//isso é uma função. pode ser usado o do/while como alternativa.
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
	criarVet();//chamado da função
	
	if(vx > 11){
		system("CLS");
		printf("\n Valor Incorreto! Digite o valor correto.");
		printf("\n\n Vetor:");
		criarVet();//chamado da função
	}
	if(vy > 11){
		system("CLS");
		printf("Valor Incorreto! Digite o valor correto.");
		printf("\n\n Vetor:");
		criarVet();//chamado da função
	}
	
	somaxy = vet[vx] + vet[vy];
	
	printf("\n O valor da posição X é %i.",vet[vx]);
	printf("\n O valor da posição Y é %i.",vet[vy]);
	printf("\n O valor da soma é %i.",somaxy);
	
}
