/*7. Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do
ano. Esque�a a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

int Dia,Mes;
int DiasPassaram;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Digite o dia de hoje:");
	scanf("%i",&Dia);
	printf("\n Digite o m�s atual:");
	scanf("%i",&Mes);
	
	DiasPassaram = (Mes * 30) + Dia;
	printf("\n Desde o in�cio do ano, sendo hoje o dia %i do m�s %i, j� se passaram %i dias",Dia,Mes,DiasPassaram);
	
	printf("\n\n");
	system("pause");
	
	
	
	
}
