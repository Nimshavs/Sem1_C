#include<stdio.h>
#define N 5
int a[N];
int n=-1,i;
int insert(){
	if(n+1==N)
		printf("array is full");
	else{
		n=n+1;
		printf("enter the number");
		scanf("%d",&a[n]);
	}
}
int disp(){
	if(n==-1)
		printf("array is empty");
	else {
		for(i=0;i<=n;i++)
			printf("%d\t",a[i]);
	}
	printf("\n");
}
int search(){
	int k;
	for(i=0;i<=n && a[i]!=k;i++)
	;
	return i;
}
int delete(){
	for(i=0;i<n;i++){
		a[i]=a[i+1];
	}
	n=n-1;
	return 0;
}
int menu(){
	int ch;
	printf("1.Insert\n 2.Display\n 3.Search\n 4.Delete\n 5.Exit\n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
int processArray(){
	int ch,pos;
	for(ch=menu();ch!=5;ch=menu()){
		switch(ch){
			case 1:
				insert();
				break;				
			case 2:
				disp();
				break;
			case 3:
				if(n>=0){
					printf("enter a number:");
					scanf("%d",&ch);
					pos=search();
						if(pos>n)
							printf("%d not found",ch);
						else
							printf("%d is found at %d",ch,pos);		
				}
				else{
					printf("Array is empty");
				}
				break;
			case 4:
				if(n!=0){
					printf("entr the number: ");
					scanf("%d",&ch);
					if(pos>n)
						printf("%d not found",ch);
					else
						n=delete();
				}
				else{
					printf("no element in array");
				}
				break;
			default:
				printf("wrong choice");
				break;
		}
	}
}

int main(){
	processArray();
	return 0;
}
