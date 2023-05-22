#include<stdio.h>
int add(int n){
	static int sum=0;
	if(n==0){
		printf("sum of n numbers :%d",sum);
		return;
    }
	else
		{
			sum+=n;
			add(--n);
		}
}

int main(){
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	add(n);
}
