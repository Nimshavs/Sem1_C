#include<stdio.h>
struct book{
	int a[5];
	char book_name[20];
	char author[20];	
};
int main(){
	struct book b[2];
	int i,n;
	for(i=0;i<2;i++){
		printf("Enter the book number: ");
		scanf("%d",&n);
		printf("enter the book name: ");
		scanf("%s",b[i].book_name);
		printf("enter the author name: ");
		scanf("%s",b[i].author);
	}
	for(i=0;i<2;i++){
		printf("\nBook %d\n",i+1);
		printf("Book name:%s\n",b[i].book_name);
		printf("Book author:%s\n",b[i].author);
	}
}
