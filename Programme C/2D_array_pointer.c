#include<stdio.h>
#include<stdlib.h>
int main(){
	int r=3,c=4,i,j;
	int *arr[r];
	for(i=0;i<r;i++)
		arr[i]=(int *)malloc(c*sizeof(int));
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			arr[i][j]=i+j+1;
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
