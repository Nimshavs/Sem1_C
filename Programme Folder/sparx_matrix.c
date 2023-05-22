#include<stdio.h>
int i,j,r,c,x,a[100][100],b[100][100];
int main(){
	printf("enter no: of row: ");
	scanf("%d",&r);
	printf("enter no: of column: ");
	scanf("%d",&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("element at a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t ",a[i][j]);
		}
		printf("\n");
	}
	printf("The sparx matrix is:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]!=0){
				b[0][0]=i;
				b[0][1]=j;
				b[i][j]=a[i][j];
				printf("\n%d",i);
				printf("\t%d",j);
				printf("\t%d",a[i][j]); 

			}
		}
	}
}
