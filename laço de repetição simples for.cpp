/*construa um algoritmo em C que leia 'n' notas e calcule a media destas,
sendo que a leitura das notas será utilizado laço de repetição, conforme
o valor de 'n' escolido pelo usuário. Entre com o nome do aluno e as 
respectivoas notas.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float Nota;
float Media;
char Aluno[30];
int QtidadeNotas;

main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	fflush(stdin);
	printf("\n Insira o nome do aluno:");
	scanf("%s",&Aluno);
	printf("\n Quantas notas este aluno tem:");
	scanf("%i",&QtidadeNotas);
	Media = 0;
	
	for(int i=1;i<=QtidadeNotas;i++){
		printf("\n Digite a nota[%i]: ",i);
		scanf("%f",&Nota);
		Media = Media + Nota;}//final de leitura de notas
		
		 Media = Media/QtidadeNotas;//calculo da media
		 
	printf("\n O aluno %s",Aluno);
	printf("\n Com %i Notas",QtidadeNotas);
	printf("\n Possui a Média: %.2f ",Media);	
}
