#include<stdio.h>
#include<string.h>
#define N 20
void insert(int array[N],int n){
	int i;
	printf("enter the elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);	
	}
}
void disp(int array[N],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
}
int search(int array[N],int n,int x){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(array[i]==x){
		flag=1;
		break;}
	}
	if(flag==0)
	printf("Element not found");
	else
	printf("Element found at %d",i+1);
	printf("\n");
	return i;
}
void dlt(int array[N],int n,int x){
	int i,j=-1;
	j=search(array,n,x);
	if(j>-1){
	for(i=j;i<n;i++){
		array[i]=array[i+1];
	}
	disp(array,n-1);
	}		
}
void sort(int array[N],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;	
			}
		}
	}
	disp(array,n);
}
int main (){
	int n,a[N],ch,k;
	do{
	printf("Select your option : \n1.Insert\n2.Search\n3.Delete\n4.Sort\n5.Display\n6.exit\n");
	scanf("%d",&ch);
		switch (ch){
			case 1:
				printf("eneter the number of elements: ");
	            scanf("%d",&n);
				insert(a,n);
				break;
			case 2 :
				printf("Enter the element to search: ");
				scanf("%d",&k);
				search(a,n,k);
				break;
			case 3:
				printf("Enter the element to delete: ");
				scanf("%d",&k);
				dlt(a,n,k);
				break;
			case 4:
				sort(a,n);
				break;
			case 5:
				disp(a,n);
				break;
			case 6:
				break;
			default :
				printf("option not available\n");
				break;
		}
	}while(ch!=6);
	return 0;
}
