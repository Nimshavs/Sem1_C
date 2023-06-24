#include<stdio.h>
#define N 5
int a[N];
int n=-1;
int insert(){
	int i;
	if(n+1==N)
		printf("ARRAY IS FULL");
	else{
		n=n+1;
		printf("enter a nunber ");
		scanf("%d",&a[n]);
	}
}

void disp(){
	int i;
	if(n==-1)
		printf("ARRAY IS EMPTY ");
	else{
		for(i=0;i<n;i++)
			printf("%d",a[i]);
	}
		
}

int menu(){
	int ch;
	printf("1.Insert\n 2.Disp\n 3.Exit\n enter your choice: ");
	scanf("%d",&ch);
	return ch;
}

int processArray(){
	int ch;
	for(ch=menu();ch!=5;ch=menu()){
		switch(ch){
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			default :
				printf("wrong choice ");
				break;
		}	
	}
		
			
}
int main(){
	processArray();
	return 0;
}
