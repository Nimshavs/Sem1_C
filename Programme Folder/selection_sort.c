#include<stdio.h>
#define N 6
int i=-1,key;
int a[N];
int insert(){
	for(i=0;i<N;i++){
		printf("enter value at a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int selectionsort(){
	int i,j,t;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}		
		}
	}
}
int disp(){
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
}
void binarysearch(int key){
	int f=0,l=N-1;
	int m;
	while(f<=l){
		m=(f+l)/2;
		if(a[m]==key){
			printf("found at %d",m);
			break;
		}
		else if(a[m]<key)
			f=m+1;
		else
			l=m-1;
	  	}
	  	if(f>l)
	  		printf("not found");
	}
int main(){
	int i,n;
	for(i=0;i<6;i++){
		printf("\n1.Insert\n2.Selection sort\n3.display\n4.binary search\n5.exit\nEnter your choice: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				insert();
				break;
			case 2:
				selectionsort();
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
				printf("wrong choice");
				break;
		}

	}
}
