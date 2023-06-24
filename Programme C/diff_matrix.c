#include<stdio.h>
int main(){
	int a[20][20],b[20][20],c[20][20];
	int i,j,n;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter the first matrix elements: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\nelement [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\nelement [%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("the first matrix is :");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d\t ",a[i][j]);
		}
	}
	printf("\n");
	printf("the second matrix is :");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d\t ",b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\nthe difference is: ");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
	}
}
