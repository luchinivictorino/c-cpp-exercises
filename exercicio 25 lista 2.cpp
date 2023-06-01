/*25. Calcule o volume de uma caixa d'água cilíndrica.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float Raio,Altura,Volume;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o raio da base: ");
	scanf("%f",&Raio);
	printf("\n Insira a altura do cilíndro: ");
	scanf("%f",&Altura);
	
	Volume = 3.14 * (Raio * Raio) * Altura;
	
	printf("\n O volume da caixa d'água é de %.2f litros.",Volume);
	
}
