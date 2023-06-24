#include<stdio.h>
#include<stdlib.h>
int read(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("the elements in %d:",i);
		scanf("%d",&a[i]);
	}
}
int disp(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
		printf("\n");
}
float mean(int *a,int n){
	int i;
	float mean=0,sum=0,m=n;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	mean=sum/m;
	return mean;
}
int main(){
	int *a,i,n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	a=(int *)malloc(n* sizeof(int));
	
	read(a,n);
	
	printf("the array elements are:");
	disp(a,n);
	
	printf("the mean of above value :%.2f",mean(a,n));
}
