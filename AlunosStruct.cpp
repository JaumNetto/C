/*
	Name: NotasAlunos.cpp
	Author: João Manoel de Oliveira Neto
	Date: 02/03/16 22:04
	Description: Registro de aluno usando struct
*/
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct aluno
{
	char nome[30];
	int idade;
	int RG;
	
};
main()
{
	int i;
	
	aluno alunos[2];

	for(i=0; i<2; i++)
	{	fflush(stdin);
		printf("\nDigite o nome:");
		gets(alunos[i].nome);
		
		printf("\nDigite a idade:");
		scanf("%d", &alunos[i].idade);
				
		printf("\nDigite o RG:");
		scanf("%d", &alunos[i].RG);
		
	}
	
	printf("\n\n'---------Exibicao---------'\n\n");

	for(i=0; i<2; i++)
	{
		printf("\nNome:");
		puts(alunos[i].nome);
		
		printf("\n\nIdade:%d", alunos[i].idade);
		
		printf("\n\nRG:%d", alunos[i].RG);
		
		printf("----------------");
	}
	
	
	
	
}
