#include<stdio.h>
int disp(int n){
	int a[5],i;
	for(i=0;i<n;i++){
		printf("enter the value at %d ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
			
}

int main(){
	int n;
	printf("enter the size of the array ");
	scanf("%d",&n);
	disp(n);
}
