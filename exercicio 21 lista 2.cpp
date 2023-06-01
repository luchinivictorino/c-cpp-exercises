/*21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada
quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele
comprou.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

int Refri350,Refri600,Refri2l,Latas,GarrafasM,GarrafasG;
float Total,TotalLitros;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira a quantidade de latas de 350ml: ");
	scanf("%i",&Refri350);
	printf("\n Insira a quantidade de garrafas de 600ml: ");
	scanf("%i",&Refri600);
	printf("\n Insira a quantidade de garrafas de 2 litros: ");
	scanf("%i",&Refri2l);
	
	Latas = 350 * Refri350;
	GarrafasM = 600 * Refri600;
	GarrafasG = 2000 * Refri2l;
	
	Total = (Latas + GarrafasM + GarrafasG);
	TotalLitros = Total / 1000;
	
	printf("\n O total de litros comprados foi: %.2f",TotalLitros);
}
