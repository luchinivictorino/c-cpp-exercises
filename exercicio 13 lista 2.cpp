/*13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
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
	
	printf("\n Digite um número de 3 dígitos apenas: ");
	scanf("%s",&Numero3D);
	
	printf("\n O número é: %c %c %c",Numero3D[0],Numero3D[1],Numero3D[2]);
	printf("\n Centena: %c",Numero3D[0]);
	printf("\n Dezena: %c",Numero3D[1]);
	printf("\n Unidade: %c",Numero3D[2]);
		
}
