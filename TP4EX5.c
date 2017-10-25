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
int main()
{
	int T[30];
    int i,j,min,verf,c,x,y;
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
	c=0;
	printf(" Que voulez-vous faire ? \n");
	scanf("%d",c);
	min=T[0];
	if (c==1)
	{
	for(j=1;j<=i-1;j++)
	        if (min>T[j])
	        	min=T[j];
		     printf("%d",min);
	        }
	else if (c==2)
	{ printf("choisir x et y \n");
				scanf("%d %d",&x,&y);
				for(j=1;j<=i-1;j++)
				 if (x==T[j])
					y=T[i];
			}
	else if (c==3)
	    {printf(" Donner une la pastion et la valeur p/y : \n") ;
	    scanf("%d %d",&x,&y);
	     for (j=i;j==x;j--)
	     {
	    	 T[j+1]=T[j];
	     }
	    	 T[x]=y ;
	    }
	else if (c==4)
	    {printf(" Donner une valeur x : \n") ;
	    scanf("%d",&x);
	    for (j=1;j<i;j++)
	    	{
	    			if (T[j]==x)
	 	      		 T[j-1]=T[j];
	    	}
	}
	    for (j=0 ; j<=i ; j++ )
	    {printf("T[%d] : %d ",j,T[j]) ;
	     printf("\n") ;}
	    return 0;

	}
