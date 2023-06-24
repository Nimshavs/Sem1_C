#include<stdio.h>
#define N 10
int stack[N];
int top=-1;
char a;
void push(){
	if(top+1==10){
		printf("stack is full");
	}
	else{
		printf("the element to be pushed: ");
		scanf("%c",&a);
		scanf("%c",&a);
//		a=getchar();
		top=top+1;
		stack[top]=a;
		printf("the pushed element is %c",stack[top]);
	}
	
}
void pop(){
	if(top==-1)
		printf("stack is empty");
	else{
		printf("poped element is %c",stack[top]);
		top=top-1;
	}
}
void peek(){
	if(top==-1){
		printf("stack is full");
	}
	else
		printf("the element is %c",stack[top]);
}
int main(){
	char ch;
	int i;
	for(i=0;i<4;i++){
	printf("\n1.push\n2.Pop\n3.Peek\n4.exit\nEnter your choice: ");
	scanf("%d",&ch);
		switch(ch){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		default:
			printf("Wrong choice");
			break;
	}
	}
}
	


