/*19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No
p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is
para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa
R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo para calcular o gasto total da
granja para marcar todos os seus frangos.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

int NumeroFrango,AnelDireito,AnelEsq;
float CustoTotal;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o n�mero de frangos: ",NumeroFrango);
	scanf("%i",&NumeroFrango);
	
	AnelDireito = 4.00;
	AnelEsq = 3.50;
	CustoTotal = NumeroFrango * AnelDireito * (2 * AnelEsq);
	
	printf("\n O gasto total ser� de: %.2f reais",CustoTotal);
}
