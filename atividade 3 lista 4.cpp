/*3 - Escreva um programa que leia 733 n�meros aleat�rios de 0 at� 300 e
imprima o maior deles e quantas vezes o maior n�mero foi lido, apresentando
este e suas respectivas posi��es.*/

#include<conio.h> 
#include<stdio.h> 
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int vet[733];
int numero;
int numerolegal=300;
int qtasvezes;
int maior;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	srand(time(NULL));
	
	system("pause");

	for(int i=0;i<733;i++){
		vet[i] = rand() % 301;
		printf("\n vet[%i] = %i",i+1,vet[i]);}
			
	fflush(stdin);
	
	for (int i=0;i<numerolegal;i++){
		if(i == 0){
			vet[i] = maior;
		}
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	printf("\n %i � o maior n�mero.",maior);		
	printf("\n\n Digite um caracter para verificar no Vetor: ");
	scanf("%i",&numero);
	fflush(stdin);
			
	int flag = 0;
	qtasvezes = 0;
	for(int i=0;i<733;i++){
		if(numero == vet[i]){
		printf("\n vet[%i] = %i",i+1,vet[i]);
		qtasvezes++;
		flag = 1;
	}}
				
	printf("\n");
		if(flag == 0){
		printf("\n N�mero %i n�o existe no vetor.",numero);
		}else{
		printf("\n O n�mero %i apareceu %i vezes.",numero,qtasvezes);}
}
