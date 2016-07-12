/*
	Name: Baskhara.cpp
	Author: João Manoel de Oliveira Neto 
	Date: 06/03/16 00:57
	Description: Programa que resolve baskhara
*/
// 
#include<conio.h>
#include<stdio.h>
#include<math.h>

int delt(int a, int b, int c)
{
	int delta;
	
	delta=(b*b)-(4*a*c);
	
	return delta;
}

int lernum(int x)
{
	printf("Digite valor:");
	scanf("%d", &x);
	
	return x;
}

main()
{
	int a, b, c, delta, x1, x2, x0;
	
	//Ler valores de a, b e c;
	printf("Valor de A:\n");
	a=lernum(a);
	fflush(stdin);
	
	printf("Valor de B:\n");
	b=lernum(b);
	fflush(stdin);
	
	printf("Valor de C:\n");
	c=lernum(c);
	fflush(stdin);
	
		//Calcular delta
		delta=delt(a, b, c);
		
	
		if(delta>0)
		{
			//Calculo da primeira raiz
			x1=(-b+sqrt(delta))/2*a;
			//calculo da segunda raiz
			x2=(-b-sqrt(delta))/2*a;
			
			printf("A primeira raiz eh:%d\n", x1);
			printf("A segunda raiz eh:%d\n", x2);
		}
			else if(delta==0)
				{
					printf("So existe uma raiz!\n");
					x0=-b/2*a;
				
					printf("A raiz eh:%d", x0);
				}
				else
				{
					printf("\nNao existem raizes reias!");
					
				}
	
	
}
