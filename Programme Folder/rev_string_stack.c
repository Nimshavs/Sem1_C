#include<stdio.h>
#define N 10
char stack[N];
int top=-1;
void push(char a){
	if(top+1==N)
		printf("Stack is full: ");
	else{
		top=top+1;
		stack[top]=a;
	}
}

void pop(){
	if(top==-1)
		printf("stack is empty:");
	else{
		printf("%c",stack[top]);
		top=top-1;
	}
}

void main(){
	int n=0;
	char s[10],i;
	printf("Enter a string:");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		push(s[i]);
	}
	printf("The reverse is:");
	for(i=0;i<n;i++)
	{
		pop();
	}
}
