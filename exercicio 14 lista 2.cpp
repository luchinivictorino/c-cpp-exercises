/*14. Calcule a �rea de uma pizza que possui um raio R (pi=3.14).*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float RaioPizza,ValorArea;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o valor do raio da pizza em cent�metros: ",RaioPizza);
	scanf("%f",&RaioPizza);
	
	ValorArea = 3.14 * (RaioPizza * RaioPizza);
	
	printf("\n A �rea total da pizza �: %.2f cm",ValorArea);
}
