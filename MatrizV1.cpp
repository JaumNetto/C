/*
	Name: MatrizV1.cpp
	Author: João Manoel de Oliveira Neto
	Date: 01/03/16 11:11
	Description: Fazer operações com matrizes
*/
#include<conio.h>
#include<stdio.h>

void lermat(int mat[3][3])
{
	int i, j;
	printf("Digite os elementos da matriz!\n");
	//ler matriz
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				{
					printf("Matriz[%d][%d]:",i,j);
					scanf("%d", &mat[i][j]);
				}
}

void exibemat(int mat[3][3])
{
	int i, j;
	
		printf("\n\n\n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					printf(" %4d ", mat[i][j]);
				}
				printf("\n");
		}
		printf("\n\n\n");
}

void SomaMat(int mat[3][3], int matB[3][3], int matC[3][3])
{
	int i, j;
	
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				matC[i][j]=mat[i][j]+matB[i][j];
}

void MultMat(int mat[3][3], int matB[3][3], int matC[3][3])
{
	
	int i, j, k;
	
	//Zerar vetor para multiplicar	
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				matC[i][j]=0;
	
	//Multiplicar
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				for(k=0; k<3; k++)
					matC[i][j]=mat[i][j]+mat[i][k]*matB[k][j];
}

int diagP(int mat[3][3])
{
	int i, soma=0;
	
		for(i=0; i<3; i++)
			soma=soma+mat[i][i];
	return soma;	
}

int diagS(int mat[3][3])
{
	
	int i, j, soma=0;
		j=2;
		for(i=0; i<3; i++)
			{
				soma=soma+mat[i][j];
				j--;
			}
	return soma;
}

int MaiorV(int mat[3][3])
{
	int i, j, maior;
	
	//Atribuir maior com o primeiro valor da matriz, para haver um maior entre eles
	maior=mat[0][0];
	
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				if(mat[i][j]>maior)
					maior=mat[i][j];
		
		return maior;	
}

int ParesMat(int mat[3][3])
{
	int i, j, pares=0;
	
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				if(mat[i][j]%2==0)
					pares++;
	
	return pares;	
}

int IdentMat(int mat[3][3])
{
	int i, j, ident=1;
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			if((i==j) && (mat[i][j]!=1))
				ident=0;
			if((i!=j) && (mat[i][j]!=0))
				ident=0;	
	
	return ident;
}

main()
{
	int mat[3][3], matB[3][3], matS[3][3], matM[3][3], somaDP, somaDS, maior, pares, op, idnt, op2;
	char resp;
	
	//Ler Matrizes inicial
		printf("Primeira Matriz!\n\n");
		lermat(mat);
		printf("\n\nSegunda Matriz!\n\n");
		lermat(matB);
	
	while(1)
	{
	
	//Switch escolha procedimento
		puts("**********MENU**********");
		puts("1- Somar Matrizes");
		puts("2- Multiplicar Matrizes");
		puts("3- Soma da Diagonal Principal");
		puts("4- Soma da Diagonal Secundaria");
		puts("5- Maior Valor da Matriz");
		puts("6- Quantidade de Pares na Matriz");
		puts("7- Verificar Identidade");
		puts("8- Exibir Matriz");
		puts("9- Inserir novas matrizes");
		
		printf("Digite a opcao:");
		scanf("%d", &op);
			if(op<1 || op>9)
				{
					puts("Opcao Invalida!0");
					printf("Digite sua opcao:");
					scanf("%d", &op);
				}
		
		switch(op)
		{
			case 1://Soma Matriz
				SomaMat(mat, matB, matS);
				exibemat(matS);
				break;
				
			case 2://Multiplica matriz
				MultMat(mat, matB, matM);
				exibemat(matM);
				break;
				
			case 3://Soma diagonal principal
				printf("\n\n-A soma da diagonal principal da matriz 1 eh: %d\n\n", diagP(mat));
				printf("\n\n-A soma da diagonal principal da matriz 2 eh: %d\n\n", diagP(matB));
				break;
				
			case 4://Soma diagonal secundaria
				printf("\n\n-A soma da diagonal secundaria da matriz 1 eh: %d\n\n", diagS(mat));
				printf("\n\n-A soma da diagonal secundaria da matriz 2 eh: %d\n\n", diagS(matB));
				break;
				
			case 5://Maior valor da matriz
				printf("\n\n-O maior valor da matriz 1 eh: %d\n\n", MaiorV(mat));
				printf("\n\n-O maior valor da matriz 2 eh: %d\n\n", MaiorV(matB));
				break;
				
			case 6://Pares na matriz
				printf("\n\n-Ha %d pares na matriz 1\n\n", ParesMat(mat));
				printf("\n\n-Ha %d pares na matriz 2\n\n", ParesMat(matB));
				break;
				
			case 7://Identidade
				idnt=IdentMat(mat);
					if(idnt==1)
						printf("\n\n-A matriz 1 eh identidade!!\n\n");
					else
						printf("\n\n-A matriz 1 nao eh identidade!!\n\n");
				
				idnt=IdentMat(matB);
					if(idnt==1)
						printf("\n\n-A matriz 2 eh identidade!!\n\n");
					else
						printf("\n\n-A matriz 2 nao eh identidade!!\n\n");
					break;
					
			case 8://Exibir matriz
				printf("\n\n\n");
				puts("1- Matriz 1");
				puts("2- Matriz 2");
				puts("3- Matriz Soma");
				puts("4- Matriz Multiplicacao");
				printf("\n\n\n");	
				
				printf("Digite qual exibir:");
				scanf("%d", &op2);
					
					if(op2==1)
						exibemat(mat);
						else if(op2==2)
								exibemat(matB);
								else if(op2==3)
										exibemat(matS);
										else
											exibemat(matM);
					break;
					
			case 9://Ler matriz
					printf("\n\nPrimeira Matriz!\n");
						lermat(mat);
					printf("\n\nSegunda Matriz!!\n");
						lermat(matB);
					break;
					
			default:
				printf("Nenhuma Opcao escolhida!");
				break;
		}
		
		printf("Deseja continuar?:(s/n):");
		fflush(stdin);
		scanf("%c", &resp);
			if(resp=='n')
				break;
		
	}
		
}//Fim do programa!
