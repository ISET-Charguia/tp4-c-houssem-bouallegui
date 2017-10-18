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
 int T1[10]={10,20,5,8,102,56,84,59,23,24};
 int T2[10]={52,65,87,15,2,9,36,12,46,97};
 int T3[10],i,j;
 printf("T1 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",T1[i]);
 }
 printf("\n");
 printf("T2 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",T2[i]);
 }
 printf("\n");

 for (i=0;i<=9;i++)
 {
	 T3[i]=T1[i];
	 T1[i]=T2[i];
	 T2[i]=T3[i];
 }
 printf("T1 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",T1[i]);
 }
 printf("\n");
 printf("T2 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",T2[i]);
 }

}
