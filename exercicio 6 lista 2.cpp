/*6. O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um
algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assume que a balan�a j� desconte o peso do prato.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float PesoPrato,ValorConta;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o peso do prato em quilos: ",PesoPrato);
	scanf("%f",&PesoPrato);
	
	ValorConta = PesoPrato * 12.00;
	
	printf("\n O valor a ser pago pelo cliente �: %.2f reais",ValorConta);
}
