/*
 ============================================================================
 Name        : Strings.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * A C Program to Find the lenght of a String
 */
int main(void) {
	char s[1000];
	int i;
	printf("Enter a string: ");
	fflush(stdout),fflush(stdin);
	scanf("%s",s);
	for(i=0;s[i]!='\0';++i);
	printf("Length of string: %d",i);
	return 0;
}
