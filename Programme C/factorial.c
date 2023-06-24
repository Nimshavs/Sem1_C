int main(){
	int n,i,num=1;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		num=num*i;
	printf("factorial of %d: %d",n,num);
}
