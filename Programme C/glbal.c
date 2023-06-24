#include<stdio.h>
#include<string.h>
#define N 20
int i,j,n,ch,k,flag,temp;
int array[N];
void insert(){
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);	
	}
}
void disp(){
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
}
int search(int x){
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
void dlt(int x){
	j=search(x);
	for(i=j;i<n;i++){
		array[i]=array[i+1];
	}
	if(flag==1)
	n--;
	disp();			
}
void sort(){
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;	
			}
		}
	}
	disp();
}
int main (){
	do{
	printf("Select your option : \n1.Insert\n2.Search\n3.Delete\n4.Sort\n5.Display\n6.exit\n");
	scanf("%d",&ch);
		switch (ch){
			case 1:
				insert();
				break;
			case 2 :
				printf("Enter the element to search: ");
				scanf("%d",&k);
				search(k);
				break;
			case 3:
				printf("Enter the element to delete: ");
				scanf("%d",&k);
				dlt(k);
				break;
			case 4:
				sort();
				break;
			case 5:
				disp();
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
