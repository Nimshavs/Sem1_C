#include<stdio.h>
#define N 5
int i=-1,n,key;
int a[N];
int insert(){
	for(i=0;i<N;i++){
		printf("enter the value at a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int bubblesort(){
	int i,j,t;
	for(i=0;i<N;i++){
		for(j=0;j<N-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int disp(){
	int i;
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}
int insertionsort(){
	int i,j,t;
	printf("After insertion sort the elemenys are: ");
	for(i=0;i<N;i++){
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	disp();
}
int selectionsort(){
	int i,j,t;
	printf("After selection sort the elemenys are: ");
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}		
		}
	}
	disp();
}
int main(){
	int i,a;
	for(i=0;i<=5;i++){
		printf("\n1.Insert\n2.bubble sort\n3.display\n4.Insertion sort\n5.Selection Sort\n6.Exit\nenter your choice: ");
		scanf("%d",&a);
		switch(a){
			case 1:
				insert();
				break;
			case 2:
				bubblesort();
				break;
			case 3:
				disp();
				break;
			case 4:
				insertionsort();
				break;
			case 5:
				selectionsort();
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}
}
