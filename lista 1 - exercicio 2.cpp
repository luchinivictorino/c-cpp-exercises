/*Algoritmo Pre�o de Autom�vel
O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica 
com o pre�o dos impostos (45% do pre�o de f�brica) e a percentagem do
revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de 
f�brica e imprima o nome do autom�vel e o pre�o final.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//Declara��o das Var�aves

char Veiculo[30];
float Preco_Fabr;
float Preco_Final;

//In�cio do Programa
main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");//clear screem - Limpa tela
//entrada de dados
	printf("\n Digite o tipo do Ve�culo:  ");
	scanf("%s",&Veiculo);
	printf("\n Digite o valor do Pre�o de F�brica do Ve�culo:  ");
	scanf("%f",&Preco_Fabr);

//c�lculo do Pre�o Final
Preco_Final = ((Preco_Fabr * 0.45) + (Preco_Fabr * 0.28)) + Preco_Fabr;

//Mostrar o Resultado

printf("\n O Tipo do Autom�vel �: %s ",Veiculo);
printf("\n O Pre�o de F�brica do Autom�vel �: %.2f ",Preco_Fabr);
printf("\n O Pre�o Final do Autom�vel �: %.2f ",Preco_Final);
printf("\n\n");
system("pause");

}//Final do Algoritmo
