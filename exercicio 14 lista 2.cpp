/*14. Calcule a área de uma pizza que possui um raio R (pi=3.14).*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float RaioPizza,ValorArea;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o valor do raio da pizza em centímetros: ",RaioPizza);
	scanf("%f",&RaioPizza);
	
	ValorArea = 3.14 * (RaioPizza * RaioPizza);
	
	printf("\n A área total da pizza é: %.2f cm",ValorArea);
}
