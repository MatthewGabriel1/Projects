/*
 ============================================================================
 Name        : E5-A2.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * A C program to Search for an element in Array.
 */
int main(void) {

	int arr[30],num,element,i;

	printf("Enter Number of Elements: \n"); //Asking user to enter Number of elements.
	fflush(stdout),fflush(stdin);
	scanf("%d",&num);

	printf("Enter the Values: \n"); //storing values into Arrays.
	for(i=0;i<num;i++){
		fflush(stdout),fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched : \n"); //Read the element to be searched.
	fflush(stdout),fflush(stdin);
	scanf("%d",&element);

	i=0;
	while(i<num && element !=arr[i]){
		i++;
	}
	if(i<num){
		printf("Number found at the Location = %d",i+1);
	}
	else {
		printf("Number not found");
	}
	return 0;
}
