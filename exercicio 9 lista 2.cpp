/*9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
máquina informe quanto será o valor arrecadado.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

int CamisaPequena,CamisaMedia,CamisaGrande,ValorPago;
int ValorPequeno,ValorMedio,ValorGrande;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o número de camisetas pequenas: ",CamisaPequena);
	scanf("%i",&CamisaPequena);
	printf("\n Insira o número de camisetas médias: ",CamisaMedia);
	scanf("%i",&CamisaMedia);
	printf("\n Insira o número de camisetas grandes: ",CamisaGrande);
	scanf("%i",&CamisaGrande);
	
	ValorPequeno = CamisaPequena * 10;
	ValorMedio = CamisaMedia * 12;
	ValorGrande = CamisaGrande * 15;
	
	ValorPago = ValorPequeno + ValorMedio + ValorGrande;
	
	printf("\n O valor total a ser pago é: %i reais",ValorPago);
}
