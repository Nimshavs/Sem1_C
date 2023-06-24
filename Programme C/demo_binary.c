#include<stdio.h>
#define N 5
int a[N];
void linearsearch(int key){
	int i;
	for(i=0;i<N && a[i]!=key;i++)
	;
		if(a[i]==key)
			printf("element found at %d");
		else
			printf("not");
}
int main(){
	int i,key;
	for(i=0;i<N;i++){
		printf("Enter the elements");
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&key);
	linearsearch(key);
}
