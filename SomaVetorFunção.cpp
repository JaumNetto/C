/*
	Name: SomaVetorFunção.cpp
	Author: João Manoel de Oliveira Neto
	Date: 20/02/16 01:30
	Description: Gerar um vetor com a soma de outros dois em uma função
*/
#include<conio.h>
#include<stdio.h>

void somavetor(int vetA[5], int vetB[5], int vetC[5])
{
	int i;
		for(i=0; i<5; i++)
			vetC[i]=vetA[i]+vetB[i];
}
main()
{
	int vet[5]={1,2,3,4,5}, vet1[5]={1,2,3,4,5}, vet2[5]={0,0,0,0,0};
	
		
		somavetor(vet, vet1, vet2);
		
		for(int i=0; i<5; i++)
			printf("%d \n", vet2[i]);
}
