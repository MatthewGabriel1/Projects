/*
 ============================================================================
 Name        : Ex4.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b , product;
	printf("Enter Two Numbers : ");
	fflush(stdout),fflush(stdin);
	scanf("%f %f",&a , &b);
	product=a*b;
	printf("Product = %f",product);
	return 0;
}
