/*7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/

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
	printf("\n Digite o mês atual:");
	scanf("%i",&Mes);
	
	DiasPassaram = (Mes * 30) + Dia;
	printf("\n Desde o início do ano, sendo hoje o dia %i do mês %i, já se passaram %i dias",Dia,Mes,DiasPassaram);
	
	printf("\n\n");
	system("pause");
	
	
	
	
}
