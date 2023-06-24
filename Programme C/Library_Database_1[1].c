#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int id;
	char name[20];
	char author[20];
	struct node *next;
};
typedef struct node lib;
lib *head = NULL;
void insert() 
{
	int i;
	char na[20],au[20];
	lib *t;
	printf("Enter the id of book:");
	scanf("%d",&i);
	printf("Enter the name:");
	scanf("%s",na);
	printf("Enter the author name:");
	scanf("%s",au);
	if(head == NULL){
		head = (lib *)malloc(sizeof(lib));
		head->id=i;
		strcpy(head->name,na);
		strcpy(head->author,au);
		head->next = NULL;
	}
	else {
		t = head;
		while(t->next != NULL) {
			t = t->next;
		}
		t->next = (lib *)malloc(sizeof(lib));
		t->next->id=i;
		strcpy(t->next->name,na);
		strcpy(t->next->author,au);
		t->next->next = NULL;
	}
}
void disp() {
	lib *t;
	if(head == NULL){
		printf("library is empty");
	}
	else {
		t = head;
		while(t != NULL) {
			printf("Book id: %d\n",t->id);
			printf("Book name: %s\n",t->name);
			printf("Book author: %s\n",t->author);
			t = t->next;
		}
		printf("\n");
	}
}
void count() {
	lib *t;
	int c = 0;
	if(head == NULL){
		printf("library is empty");
	}
	else {
		t = head;
		while(t != NULL) {
			c++;
			t = t->next;
		}
		printf("\nCount %d\n",c);
	}
}
void search()
{	
	int no;
	lib *t;
	printf("enter the id of book to search:");
	scanf("%d",&no);
	if(head==NULL)
	{
		printf("No books available");
	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			if(t->id==no)
			{
				printf("id:%d\n",t->id);
				printf("name:%s\n",t->name);
				printf("author:%s\n",t->author);
				break;
			}
			t=t->next;
		}
		printf("\n");
	}
}
void del()
{
	lib *t;
	int no;
	printf("Enter the id of book:");
	scanf("%d",&no);
	if(head == NULL){
		printf("\nLibrary is Empty");
	}
	else if(head->id == no){ 
		head = head->next;
	}
	else {
		t = head;
		while(t->next != NULL && t->next->id != no){
			t = t->next;
		}
		if(t->next == NULL){ 
			printf("Book Not Found");
		}
		else {   
			t->next = t->next->next; 
		}
	}
}
void main() {
	int ch;
	while(ch!=5)
	{
	printf("\t\t\t Library Database  \n");
	printf("\t\t\t ----------------  \n");
	printf("1.Insert Book\n2.Display Book \n3.Delete Book\n4.Search Book\n5.Exit");
	printf("\nEnter Your Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		insert();
		break;
		case 2:
		disp();
		break;
		case 3:
		del();
		break;
		case 4:
		search();
		break;
		case 5:
		printf("exiting....");
		exit(0);
		default:
		printf("Wrong Choice");
	}
	}

}
