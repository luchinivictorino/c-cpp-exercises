/*3 � Algoritmo Media Valor
Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
destes, e em seguida apresente esta m�dia e caso esta seja maior ou igual que 30 graus
escreva �temperatura acima da m�dia, calor�, caso esta m�dia seja inferior ou igual a 15 graus
�temperatura a baixo da m�dia, frio � e se esta estiver no intervalo entre estes dois valores,
�temperatura mediana, temperatura agrad�vel�.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float temp1,temp2,temp3,temp4,temp5,MediaTemperaturas;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Digite a primeira temperatura:");
	scanf("%f",&temp1);
	printf("\n Digite a segunda temperatura:");
	scanf("%f",&temp2);
	printf("\n Digite a terceira temperatura:");
	scanf("%f",&temp3);
	printf("\n Digite a quarta temperatura:");
	scanf("%f",&temp4);
	printf("\n Digite a quinta temperatura:");
	scanf("%f",&temp5);
	
	MediaTemperaturas = (temp1+temp2+temp3+temp4+temp5)/5;
	printf("\n A primeira temperatura �: %.2f �C",temp1);
	printf("\n A segunda temperatura �: %.2f �C",temp2);
	printf("\n A terceira temperatura �: %.2f �C",temp3);
	printf("\n A quarta temperatura �: %.2f �C",temp4);
	printf("\n A quinta temperatura �: %.2f �C",temp5);	
	printf("\n A m�dia das temperaturas �: %.2f",MediaTemperaturas);
	
	if(MediaTemperaturas >= 30){
		printf("\n \n quente");
}
	if(MediaTemperaturas == 15){
		printf("\n \n bom");
}
	if(MediaTemperaturas < 15){
		printf("\n \n frio");
}
	printf("\n\n");
	system("pause");
}


