#include<stdio.h>
#define N 5
int n=10,e,i;
int q[N];
int f=-1;
int r=-1;
int enqueue(int e){
	if(((r+1)%N)==f)
		printf("Queue is full");
	else{
		if(f==-1)
			f=0;
		r=((r+1)%5);
		q[r]=e;
	}
	
	return e;
}
int dequeue(int e){
	if(f==-1)
		printf("queue is empty");
	else if(q[f]=e){
		printf("deleted element is %d",q[f]);
		if(f==r){
			f=r=-1;
		}
	else
		f=((f+1)%N);
	}
	else
	
		printf("element not found");
}
int disp(){
	if(f==-1)
		printf("Queue is empty");
	else{
		for(i=f;i<=r;i++){
			printf("%d\t",q[f]);
			f++;	
		}
	}
}
int main(){
	int ch;
	for(i=0;i<n;i++){
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter the element: ");
				scanf("%d",&ch);
				enqueue(ch);
				break;
			case 2:
				printf("enter the elemented to be deleted: ");
				scanf("%d",&ch);
				dequeue(ch);
				break;
			case 3:
				disp();
				break;
			default:
				printf("WRONG CHOICE");
				break;
		}
	}
}
