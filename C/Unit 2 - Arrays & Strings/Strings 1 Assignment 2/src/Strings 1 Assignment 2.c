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
 *  A C Program to Find the Frequency of Characters in a String
 */
int main(void) {
	char c[1000],ch;
	int i,count=0;
	printf("Enter a string: ");
	fflush(stdout),fflush(stdin);
	gets(c);
	printf("Enter a Character to find Frequency : ");
	fflush(stdout),fflush(stdin);
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';++i){
		if(ch==c[i])
			++count;
	}
	printf("Frequency of %c = %d",ch,count);
	return 0;
}
