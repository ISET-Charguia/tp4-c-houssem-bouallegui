/*
 ============================================================================
 Name        : TP4EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
	int n,m,p,T[20],i,TP[20],TN[20];
	 printf("donner la taille du tableau : ");
	  scanf("%d",&n);
	  for(i=0;i<=(n-1);i++)
	  {
		  printf("Donner la valeur de la case n°: %d \n",i+1);
	      scanf("%d",&T[i]);
	  }
	  p=0;
	  m=0;
	  for(i=0;i<=(n-1);i++)
	  {
		  if(T[i]>=0)
		  {
		    TP[p]=T[i];
		    p++;
		  }
		  else
			{
			  TN[m]=T[i];

	        m++;
			}
	  }
			for (i=0;i<=(p-1);i++)
			{
				printf("%d | ",TP[i]);
			}
			printf("\n");
			for (i=0;i<=(m-1);i++)
			{
				printf("%d | ",TN[i]);
			}
}
