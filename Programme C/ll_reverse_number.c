#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node stack;
stack *top=NULL;
void push(int e){
	stack *t;
	t=(stack *)malloc(sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
}
void pop(){
	if(top==NULL)
		printf("stack is empty");
	else{
		printf("%d\t",top->data);
		top=top->next;
	}
	printf("\n");
}
void main(){
	int i,n;
	int a[10];
	int x;
	printf("Enter the number: ");
	scanf("%d",&a[i]);
//	gets(x);
//	printf("%s",a);
	n=strlen(a[i]);
//	printf("%d",n);
	for(i=0;i<n;i++){
		x=a[i];
		push(x);
	}
	for(i=0;i<n;i++){
		pop();
	}
		
}
