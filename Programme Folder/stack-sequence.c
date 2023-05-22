#include<stdio.h>
#include<string.h>
#define N 20
char stack[N];
char a[N];
char x;
int top=-1,n,i;
void disp(){
	for(i=0;i<=top;i++)
		printf("%c",stack[i]);
}
void push(char x){
	if(top+1==N)
		printf("stack is full");
	else{
		top++;
		stack[top]=x;
	}
}
void pop(){
	if(top==-1)
		printf("stack is empty");
	else{
		printf("%c",stack[top]);
		top--;
	}
}
int main(){
	printf("enter the character: ");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(isalnum(a[i]))
			push(a[i]);
		else
			pop();
		
	}
}
