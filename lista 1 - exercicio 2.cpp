/*Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica 
com o preço dos impostos (45% do preço de fábrica) e a percentagem do
revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de 
fábrica e imprima o nome do automóvel e o preço final.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//Declaração das Varíaves

char Veiculo[30];
float Preco_Fabr;
float Preco_Final;

//Início do Programa
main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");//clear screem - Limpa tela
//entrada de dados
	printf("\n Digite o tipo do Veículo:  ");
	scanf("%s",&Veiculo);
	printf("\n Digite o valor do Preço de Fábrica do Veículo:  ");
	scanf("%f",&Preco_Fabr);

//cálculo do Preço Final
Preco_Final = ((Preco_Fabr * 0.45) + (Preco_Fabr * 0.28)) + Preco_Fabr;

//Mostrar o Resultado

printf("\n O Tipo do Automóvel é: %s ",Veiculo);
printf("\n O Preço de Fábrica do Automóvel é: %.2f ",Preco_Fabr);
printf("\n O Preço Final do Automóvel é: %.2f ",Preco_Final);
printf("\n\n");
system("pause");

}//Final do Algoritmo
