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
/*
 * C Program to Insert an element in an Array.
 */
int main(void) {
	int arr[30] , element , location ,num , i;
	printf("Enter number of elements: ");
	fflush(stdout),fflush(stdin);
	scanf("%d",&num);

	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout),fflush(stdin);
	scanf("%d",&element);

	printf("Enter the loction: ");
	fflush(stdout),fflush(stdin);
	scanf("%d",&location);

	for(i=num;i>=location;i--){
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=element;

	//print out result
	for(i=0;i<num;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
