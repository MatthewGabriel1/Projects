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


/*A C Program to find sum of two matrix of order 2*2 using multidimensional arrays
 * where elements of matrix are entered by user.
 * Here's it.
 */
int main(void) {
	int i,j;
	float a[2][2],b[2][2],c[2][2];

	printf("Enter all the elements of 1st Matrices: \n");

	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("Enter A %d%d: ",i+1,j+1);
			fflush(stdout),fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	printf("Enter all the elements of 2nd Matrices: \n");

	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("Enter B%d%d:",i+1,j+1);
			fflush(stdout),fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			c[i][j]=a[i][j]+b[i][j];
		}
	printf("sum of matrices: \n");
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("%.1f\t",c[i][j]);
			if(j==1)
				printf("\n");
		}
	return 0;

}
