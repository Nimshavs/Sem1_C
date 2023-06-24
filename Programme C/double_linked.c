
None selected
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node dlist;
dlist *head = NULL;
void insert(int e) {
	dlist *t;
	if(head == NULL){
		head = (dlist *)malloc(sizeof(dlist));
		head->data = e;
		head->next = NULL;
		head->prev = NULL;
	}
	else {
		t = head;
		while(t->next != NULL) {
			t = t->next;
		}
		t->next = (dlist *)malloc(sizeof(dlist));
		t->next->data = e;
		t->next->next = NULL;
		t->next->prev = t;
	}
}
void disp() {
	dlist *t;
	if(head == NULL){
		printf("DList is empty");
	}
	else {
		t = head;
		while(t != NULL){
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("\n");
	}
}
int count() {
	dlist *t;
	int c = 0;
	if(head == NULL){
		printf("DList is empty");
	}
	else {
		t = head;
		while(t != NULL){
			c++;
			t = t->next;
		}
		printf("\nCount %d",c);
	}
	return c;
}
int search(int e) {
	dlist *t;
	int c = 0;
	if(head == NULL){
		printf("DList is empty");
	}
	else {
		t = head;
		while(t != NULL){
			if(t->data == e) {
				c =1;
				break;
			}
			t = t->next;
		}
		if(c == 1)
			printf("\nElement Found");
		else
			printf("Element Not Found");
	}
	return c;
}
int findandreplace(int e,int nv) {
	dlist *t;
	int c = 0;
	if(head == NULL){
		printf("DList is empty");
	}
	else {
		t = head;
		while(t != NULL){
			if(t->data == e) {
				t->data = nv;
				c =1;
				break;
			}
			t = t->next;
		}
		if(c == 1)
			printf("\nElement Found");
		else
			printf("Element Not Found");
	}
	return c;
}

void Delete(int e) {
	dlist *t;
	if(head == NULL){ // list is empty
		printf("DList is empty");
	}
	else if(head->data == e){ // first element with no element or several elements
		head = head->next;
		if(head != NULL) {
			head->prev = NULL;
		}
	}
	else {
		t = head;
		while(t != NULL && t->data != e){
			t = t->next;
		}
		if(t == NULL) {
			printf("Not Found");
		}
		else {   //intermediate or last node
			t->prev->next = t->next; 
			if(t->next != NULL) {
				t->next->prev = t->prev;
			}
		}
	}
}
int menu() {
	int ch;
	printf("1. Insert\n2. Display\n3. Delete\n4. Count\n5. Search\n6. Find and Replace\n7. Exit\nEnter your Choice");
	scanf("%d",&ch);
	return ch;
}
void processList() {
	int ch,nv;
	for(ch = menu();ch != 7;ch = menu()) {
		switch(ch) {
			case 1:
				printf("Enter the element");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				disp();
				break;
			case 3:
				printf("Enter the element");
				scanf("%d",&ch);
				Delete(ch);
				break;
			case 4:
				count();
				break;
			case 5:
				printf("Enter the element");
				scanf("%d",&ch);
				search(ch);
				break;
			case 6:
				printf("Enter the element to replace");
				scanf("%d",&ch);
				printf("Enter the new element");
				scanf("%d",&nv);
				findandreplace(ch,nv);
				break;
			case 7:
				break;
			default:
				printf("Wrong Choice");
				break;
		}				
	}
}
int main() {
	processList();
	return 0;
}
