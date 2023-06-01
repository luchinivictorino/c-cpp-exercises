/*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

char NomePessoa[30];
float Peso;
float PesoNovo;
char op;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("\n Digite o nome da Pessoa:");
	scanf("s%",&NomePessoa);
	fflush(stdin);//ao ler string, pode ocorre erros, isso é para corrigir o erro.
	printf("\n Digite o peso da Pessoa:");
	scanf("%f",&Peso);
	
	printf("\n Selecione a opção conforme seu progresso nutricional:");
	printf("\n a) Engordei 15%% do meu peso inicial");
	printf("\n b) Emagreci 20%% do meu peso inicial");
	printf("\n Digite a opção:");
	
	op = getche();//leitura de teclado char com eco - mostra na tela.
	op = toupper(op);//joga o char para maiúsculo.
	if(op == 'A'){//comparação de op com A.
		PesoNovo = Peso * 1.15;
		printf("\n Meu peso inicial: %.2f e como engordei 15%%, fica: %.2f",Peso,PesoNovo);
			
	}else
	if(op == 'B'){
		PesoNovo = Peso - (Peso * 0.20);
		printf("\n Meu peso inicial: %.2f e como emagreci 20%%, fica: %.2f",Peso,PesoNovo);
	}
	
	printf("\n\n");
	system("pause");
}
