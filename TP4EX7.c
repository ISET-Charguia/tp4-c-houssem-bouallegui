/*
 ============================================================================
 Name        : TP4EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
     int M[20][20], l , c , i ,j , s ;

     do
    {
       printf(" Donner les dimension de la matrice L C : ");
       scanf("%d %d",&l,&c);
    }
    while (( l > 20 ) || ( c > 20 )) ;
    for (i=0 ; i<l ; i++ )
    {  for (j=0 ; j<c ; j++ )
       {
        printf(" Donner une valeur de t[%d][%d] : ",i+1, j+1) ;
        scanf("%d",&M[i][j]); }
    }
    s = 0 ;
     for (i=0 ; i<l ; i++ )
    {  for (j=0 ; j<c ; j++ )
       { s = s + M[i][j] ;}}
    printf(" la somme de matrice = %d et la moyenne = %d ",s,s/(l*c)) ;
}

