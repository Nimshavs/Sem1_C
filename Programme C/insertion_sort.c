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
int insertionsort(){
	int i,j,t;
	for(i=0;i<N;i++){
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
}
int disp(){
	int i;
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}
void binarysearch(int key){
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
		printf("\n1.Insert\n2.insertion sort\n3.display\n4.binary search\n5.Exit\nenter your choice: ");
		scanf("%d",&a);
		switch(a){
			case 1:
				insert();
				break;
			case 2:
				insertionsort();
				break;
			case 3:
				disp();
				break;
			case 4:
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
