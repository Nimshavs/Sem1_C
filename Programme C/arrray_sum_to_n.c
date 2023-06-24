#include<stdio.h>
int main(){
	int a[10],i,n;
	int sum=0;
	printf("enter the value for n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the values for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("the total value is : %d ",sum);
}

