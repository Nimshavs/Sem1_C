#include<stdio.h>
#include<stdlib.h>
int main(){
	int r,c,i,j;
	printf("enter the size of row: ");
	scanf("%d",&r);
	printf("enter the size of column: ");
	scanf("%d",&c);
	int *ptr=malloc((r*c)*sizeof(int));
	for(i=0;i<r*c;i++)
		ptr[i]=i+1;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",ptr[i*c+j]);
		}
		printf("\n");
	}
}

