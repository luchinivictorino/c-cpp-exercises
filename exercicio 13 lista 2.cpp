/*13. Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprimir a sa�da da seguinte forma:
CENTENA = x DEZENA = x UNIDADE = x*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

char Numero3D[3];
char op;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Digite um n�mero de 3 d�gitos apenas: ");
	scanf("%s",&Numero3D);
	
	printf("\n O n�mero �: %c %c %c",Numero3D[0],Numero3D[1],Numero3D[2]);
	printf("\n Centena: %c",Numero3D[0]);
	printf("\n Dezena: %c",Numero3D[1]);
	printf("\n Unidade: %c",Numero3D[2]);
		
}
