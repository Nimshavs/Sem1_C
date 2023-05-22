#include<stdio.h>
#include<string.h>
int stack[30];
int top=-1,leng;
void push(int num)
{
	if(top>=leng-1)
	{
		printf("\nStack Overflow!");
	}
	else
	{
		top=top+1;
		stack[top]=num;
	}
}
int pop()
{
	int item;
	if(top<0)
	{
		printf("\n Stack Underflow");
	}
	else
	{
		item=stack[top];
		top=top-1;
		return item;
	}
}
void evalPostFixExpression(char postfix[])
{
	int i,ch,val,a,b;	
	for(i=0;i<leng;i++)
	{
		ch=postfix[i];
		if(isdigit(ch))
		{
			push(ch - '0');
		}
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
		{
			a=pop();
			b=pop();
			switch(ch){
				case '*':
					val=b*a;
				break;
				case '/':
					val=b/a;
				break;
				case '+':
					val=b+a;
				break;
				case '-':
					val=b-a;
				break;				
			}
			push(val);
		}
	}
	printf("\nResult of expression evaluation : %d \n",pop());
}
void main()
{
	char postfix[30];
	printf("\nEnter the Postfix Expression:"); 
	gets(postfix);
	leng=strlen(postfix);
	evalPostFixExpression(postfix);
}

