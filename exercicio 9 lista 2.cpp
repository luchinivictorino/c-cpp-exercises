/*9. Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usu�rio
forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a uma venda, e a
m�quina informe quanto ser� o valor arrecadado.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

int CamisaPequena,CamisaMedia,CamisaGrande,ValorPago;
int ValorPequeno,ValorMedio,ValorGrande;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Insira o n�mero de camisetas pequenas: ",CamisaPequena);
	scanf("%i",&CamisaPequena);
	printf("\n Insira o n�mero de camisetas m�dias: ",CamisaMedia);
	scanf("%i",&CamisaMedia);
	printf("\n Insira o n�mero de camisetas grandes: ",CamisaGrande);
	scanf("%i",&CamisaGrande);
	
	ValorPequeno = CamisaPequena * 10;
	ValorMedio = CamisaMedia * 12;
	ValorGrande = CamisaGrande * 15;
	
	ValorPago = ValorPequeno + ValorMedio + ValorGrande;
	
	printf("\n O valor total a ser pago �: %i reais",ValorPago);
}
