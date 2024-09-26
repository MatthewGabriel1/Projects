/*
 ============================================================================
 Name        : Ex3.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a , b , sum;
	printf("Enter two integers : ");
	fflush(stdout),fflush(stdin);
	scanf("%d %d",&a , &b);
	sum=a+b;
	printf("sum : %d",sum);
	return 0;
}
