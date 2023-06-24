#include<stdio.h>
int printArray(int A[],int i,int n){
	if(i==n)
		return 0;
	else{
		printf("%d\t",A[i]);
	}
	printArray(A,i+1,n);
		
}
int main(){
	int n;
	int i;
	printf("enter the size ofthe array :");
	scanf("%d",&n);
	int A[5];
	for(i=0;i<n;i++){
		printf("enter the value at %d ",i);
		scanf("%d",&A[i]);
	}
	printf("the elements are :");
	printArray(A,0,n);
}
