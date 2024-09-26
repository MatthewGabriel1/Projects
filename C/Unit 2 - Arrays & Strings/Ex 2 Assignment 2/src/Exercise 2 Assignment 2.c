/*
 ============================================================================
 Name        : Exercise.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , n;
	float num[100],sum=0.0,average;
	printf("Enter the numbers of data: ");
	fflush(stdout),fflush(stdin);
	scanf("%d",&n);
	while(n>100||n<=0){
		printf("Error!!! number should be in range of (1 to 100). \n");
		printf("Enter the number again: ");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		printf("%d. Enter Number: ",i+1);
		fflush(stdout),fflush(stdin);
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	average=sum/n;
	printf("Average = %.2f",average);
	return 0;
}
