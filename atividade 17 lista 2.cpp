/*17. Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a
um algoritmo para ler uma temperatura Celsius e imprimi-la em Fahrenheit (pesquise como
fazer este tipo de convers�o).*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

float TempCelsius,TempFahrenheit;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira a temperatura em graus Celsius: ",TempCelsius);
	scanf("%f",&TempCelsius);
	
	TempFahrenheit = (TempCelsius * 9/5) + 32;
	
	printf("\n A temperatura atual, em Fahrenheit �: %.2f",TempFahrenheit);
}
