#include<stdio.h>
int reverseArray(int a[],int n){
	int i;
	if(n>0){
		i=n-1;
		printf("%d\t",a[i]);
		reverseArray(a,i);
		
	}
}

int main(){
	int a[5],n,i;
	printf("enter the size of array ");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		printf("enter the elements at a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	printf("the reversed elements are: ");
	reverseArray(a,n);	
}
