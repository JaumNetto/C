/*
	Name: TesteRelogioSStruct.cpp
	Author: João Manoel de OLiveira neto
	Date: 17/02/16 18:54
	Description: Relogio utilizando struct.
*/
#include<conio.h>
#include<stdio.h>
#include<Windows.h>


main()
{

struct relogio
{
	int horas=0;
	int minutos=0;
	int segundos=0;
};

	struct relogio on;
	
	for(int i=0; i<24; i++)
		{
			if(on.minutos==60)
				on.horas=on.horas+1;
			
		for(int j=0; j<60; j++)
			{	
				if(on.minutos==60)
					on.minutos=0;
			
				if(on.segundos==60)
					on.minutos=on.minutos+1;
			for(int z=0; z<60; z++)
				{
					if(on.segundos==60)
						{
							on.segundos=0;
						}	
						printf("%d:%d:%d \n", on.horas, on.minutos, on.segundos);				
					on.segundos=on.segundos+1;
					Sleep(200);
					
					system("cls");		
				}
			}
			
		}
		
}

