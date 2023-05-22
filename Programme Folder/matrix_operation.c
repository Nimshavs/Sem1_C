#include<stdio.h>
int a[100][100],b[100][100],s[100][100],r,c,i,j,k;
int insert(){
	printf("Enter the row count: ");
	scanf("%d",&r);
	printf("Enter the column count: ");
	scanf("%d",&c);
	printf("Enter the first matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("the element at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	printf("Enter the second matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the second matrix");
			printf("the element at b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);	
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
}
int add(){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",s[i][j]);
		}
	printf("\n");
	}
}
int sub(){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",s[i][j]);
		}
	printf("\n");
	}
}
int mult(){
	for(i=0;i<r;i++){
		for(k=0;k<c;k++){
			s[i][k]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",s[i][k]);
		}
	printf("\n");
	}
}
int main(){
	int ch;
	for(i=0;i<10;i++){
		printf("\n1.Insert");
		printf("\n2.Addition");
		printf("\n3.Subtraction");
		printf("\n4.Multiplication");
		printf("\n5.Transpose");
		printf("\n6.Determinant");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch){
		case 1:
			insert();
			break;
		case 2:
			add();
			break;
		case 3:
			sub();
			break;
		case 4:
			mult();
			break;
//		case 5:
			transpose();
			break;
//		case 6:
			det();
			break;
		default:
			printf("WRONG CHOICE");
			break;
		}
	}	
}
