/*
 ============================================================================
 Name        : Ex5.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a Character : ");
	fflush(stdout),fflush(stdin);
	scanf("%c",&c);
	printf("Ascii Value of %c=%d",c,c);
	return 0;
}
