#include<stdio.h>
int main(){
	int a[10],n,i;
	printf("enter the n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("the elements at a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
