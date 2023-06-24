#include<stdio.h>
#include<stdlib.h>
void main(){
	int *a;
	int n,i;
	printf("enter the size of the array :");
	scanf("%d",&n);
	a=(int *)malloc(n* sizeof(int));
	for(i=0;i<n;i++){
		printf("the elements are :",i);
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	free(a);
}

