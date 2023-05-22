#include<stdio.h>
int main(){
	int base,exp,result;
	printf("enter base number:");
	scanf("%d",&base);
	printf("enter exp number :");
	scanf("%d",&exp);
	
	result = pow(base,exp);
	printf("the value for %d^%d = %d",base,exp,result);
}
