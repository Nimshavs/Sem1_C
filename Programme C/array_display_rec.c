#include<stdio.h>
int printArray(int a[],int i,int n){
	if(i==n)
		return 0;
	else{
		printf("%d\t",a[i]);
	}
	
	printArray(a,i+1,n);
}
int main(){
	int a[5],i,n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the value at %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("the elements are: ");
	printArray(a,0,n);
	
}
