/*
 ============================================================================
 Name        : TP4EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
  int i,j,k,n1,n2,T1[10],T2[10],T3[20] ;
  do
    {
       printf(" Donner N le nombre d'entier N1/N2 : ");
       scanf("%d %d",&n1,&n2);
    }
    while ((n1>10) || ( n2>10)) ;
    for (i=0 ; i<n1 ; i++ )
    {
        printf(" Donner une valeur de T1[%d] : ",i+1) ;
        scanf("%d",&T1[i]);
    }
     for (i=0 ; i<n2 ; i++ )
    {
        printf(" Donner une valeur de T2[%d] : ",i+1) ;
        scanf("%d",&T2[i]);
    }
    k=0;
    i=0;
    j=0;
   do
   {if (T1[i]<T2[j])
     {
          T3[k] = T1[i] ;
          i++ ;
          k++ ;
     }
     else if (T2[j]<T1[i])
     {
          T3[k] = T2[j] ;
          j++ ;
          k++ ;
     }


     else  if (T2[j] == T1[i])
      {
         T3[k] = T2[j]  ;
         T3[k+1] = T1[i]  ;
         j++ ;
         i++ ;
         k+=2 ;
      }
}while(k<n1+n2);
   for (i=0 ; i<=k ; i++ )
	   printf("%d : ",T3[i]) ;
}
