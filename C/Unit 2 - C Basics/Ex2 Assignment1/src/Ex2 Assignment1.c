/*
 ============================================================================
 Name        : Ex2.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("Enter An Integer : ");
	fflush(stdout),fflush(stdin);
	scanf("%d",&i);
	printf("You Entered : %d",i);
	return 0;
}
