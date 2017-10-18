/*
 ============================================================================
 Name        : TP4EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
int n,T[20],i,som;
double moy;
 printf("donner la taille du tableau : ");
  scanf("%d",&n);
  som=0;
  for(i=0;i<=(n-1);i++)
  {
	  printf("Donner la valeur de la case n°: %d \n",i+1);
      scanf("%d",&T[i]);
      som=som+T[i];
  }
  moy=som/n;
  printf("la moyenne de ce tableau est =%.2lf",moy);
}
