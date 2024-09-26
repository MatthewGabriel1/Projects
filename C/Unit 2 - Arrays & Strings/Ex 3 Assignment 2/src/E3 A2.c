/*
 ============================================================================
 Name        : E3.c
 Author      : Matthew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * C Program To Find Transpose of a Matrices
 */
int main(void) {
	int a[10][10],t[10][10],r,c,i,j;

		printf("Enter Rows & Columns : \n");
		fflush(stdout),fflush(stdin);
		scanf("%d%d",&r,&c);
	//storing element of matrices entered by user in array a[r][c]
		printf("Enter elements of Matrices: \n");
		for(i=0;i<r;++i)
			for(j=0;j<c;++j){
				printf("Enter Elements A%d%d",i+1,j+1);
				fflush(stdout),fflush(stdin);
				scanf("%d",&a[i][j]);
			}
		//Displaying Matrices
		printf("\nEntered Matrices : \n");
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				printf("%d\t",a[i][j]);
			}
			printf("\n\n");
		}
		//Finding Transpose of matrices a[i][j] & storing it in t[j][i].
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				t[j][i]=a[i][j];
			}
		}
		//Displaying the transpose.
		printf("\nTranspose of Matrices:\n ");
		for(i=0;i<c;++i){
			for(j=0;j<r;++j){
				printf("%d\t",t[i][j]);
			}
			printf("\n\n");
		}
		return 0;
}
