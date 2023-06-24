#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,i,n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	a=(int *)calloc(n,2);
	for(i=0;i<n;i++){
		printf("the elements are:");
		scanf("%d",(a+i));
	}
		
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
	free(a);
	return 0;
}
