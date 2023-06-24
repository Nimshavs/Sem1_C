#include<stdio.h>
int main(){
	int a[10],i,n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("the value at a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("the elements are: ");
	for(i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	}
	printf("\n");
	printf("the reversed elements are: ");
	for(i=n-1;i>=0;i--)
		printf("%d\t",a[i]);
}
