int main(){
	int a,b;
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping :%d %d",a,b);
	
}
