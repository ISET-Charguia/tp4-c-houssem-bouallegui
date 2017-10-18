/*
 ============================================================================
 Name        : TP4EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
	int T[30];
    int i,j,min,verf,choix,x,y;
	i=0;
	verf=0;
	do
	{

		printf("donner la valeur de la case n° %d \n",i+1);
		scanf("%d",&T[i]);
		printf("continuer ? \n");
		scanf("%d",&verf);
		i++;
	}while(verf==1);
	printf(" Que voulez-vous faire ? \n");
	scanf("%d",choix);
	min=T[0];
	switch (choix)
	{
	case 1: {for(j=1;j<=i-1;j++)
	        if (min<=T[j])
	        	min=T[j];
		     printf("%d",min);
	        }
	case 2: { printf("choisir x et y \n");
				scanf("%d %d",&x,&y);
				for(j=1;j<=i-1;j++)
				 if (x==T[j])
					y=T[i];
			}
	}
	for(j=1;j<=i-1;j++)
		printf("%d | ",T[j]);
}
