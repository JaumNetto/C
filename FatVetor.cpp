/*
	Name: VetorFatorialFunção	
	Author: João Manoel de Oliveira Neto
	Date: 20/02/16 03:10
	Description: Faz o fatorial de cada numero recebido no vetor
*/
#include<conio.h>
#include<stdio.h>

void fatvetor(int vet[5], int vetfat[5])
{
	
	int i, j=1, fat;
	//Laço fazendo fatorial
		for(i=0; i<5; i++)
			{
				fat=1;
					for(j=1; j<=vet[i]; j++)
						fat=fat*j;
					vetfat[i]=fat;	
			}
		
}
main()
{
	int vet[5]={1,2,3,4,5}, vetfat[5];
	
		
		fatvetor(vet, vetfat);
		
		for(int i=0; i<5; i++)
			printf("%d \n", vetfat[i]);
}
