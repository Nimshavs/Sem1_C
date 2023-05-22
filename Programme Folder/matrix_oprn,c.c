#include<stdio.h>
int a[100][100],b[100][100],r,c;
int add(){
	int i,j,sum[100][100];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){ 
			sum[r][c]=a[r][c]+b[r][c];
		}
	
		
	}
}
int main(){
	
	int choice;
	printf("choose the matrix operation :\n ");
	printf("\n1. Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Transpose\n");
	printf("5.Determinant\n");
	printf("enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			add();
			break;
	}
	
	}



