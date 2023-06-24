#include<stdio.h>
int q[5],i,n=10;
int r=-1,f=-1;
int enqueue(int e){
	if(r+1==5){
		printf("Queue is full");
	}
	else{	
		r=r+1;
		q[r]=e;
	}
	if(f=-1){
		f++;
	}
	return e;
}
int dequeue(int e){
	if(f==-1)
		printf("Queue is empty");
	else if(q[f]==e){
		printf("%d\t",q[f]);
		f=f+1;
	}
	else
		printf("not found");
}
void disp(){
	if(f==-1)
		printf("Queue is empty");
	else{
		for(i=0;i<r;i++){
			printf("%d\t",q[f]);
			f=f+1;
		}	
	}
}

void main(){
	int ch;
	for(i=0;i<n;i++){
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter the number: ");
				scanf("%d",&ch);
				enqueue(ch);
				break;
			case 2:
				printf("enter the number to be deleted: ");
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
	
