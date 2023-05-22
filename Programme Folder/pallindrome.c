int main(){
	int n,rev=0,rem,original;
	printf("enter a number :");
	scanf("%d",&n);
	original=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(original==rev)
		printf("%d is pallindrome",original);
	else
		printf("%d is not pallindrome",original);
}
