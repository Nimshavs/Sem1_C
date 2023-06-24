#include<stdio.h>
#define N 6
int i=-1,n,key;
int a[N];
int insert(){
	for(i=0;i<N;i++){
		printf("enter the value at a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int disp(){
	int i;
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}
int binarysearch(int key){
	int s=0,f=N-1;
	int m;
	while(s<=f){
		m=(s+f)/2;
		if(a[m]==key){
			printf("found at %d",m);
			break;
		}
		else if(a[m]<key)
			s=m+1;
		else
			f=m-1;
		}
		if(s>f)
			printf("not found");
}
int main(){
	int i,a;
	for(i=0;i<=5;i++){
		printf("\n1.Insert\n2.display\n3.binary search\n4.Exit\nenter your choice: ");
		scanf("%d",&a);
		switch(a){
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:
				printf("enter the key element: ");
				scanf("%d",&key);
				binarysearch(key);
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}
}
