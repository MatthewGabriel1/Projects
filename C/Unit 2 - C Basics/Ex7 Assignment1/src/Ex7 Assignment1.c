/*
 ============================================================================
 Name        : Ex7.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b;
	printf("Enter value of a : ");
	fflush(stdout),fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdout),fflush(stdin);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\r\n After Swapping , Value of a : %f",a);
	printf("\r\n After Swapping , Value of b : %f",b);
	return 0;
}
