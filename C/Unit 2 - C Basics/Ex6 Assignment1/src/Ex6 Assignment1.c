/*
 ============================================================================
 Name        : Ex6.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b , temp;
	printf("Enter Value of a : ");
	fflush(stdout),fflush(stdin);
	scanf("%f",&a);
	printf("Enter Value of b : ");
	fflush(stdout),fflush(stdin);
	scanf("%f",&b);
	temp = a;
	a=b;
	b=temp;
	printf("\r\n After Swapping , Value of a : %f",a);
	printf("\r\n After Swapping , Value of b : %f",b);

	return 0;
}
