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
int menu() {
	int ch;
	printf("1. Insert\n2. Display\n3. Exit\nEnter your Choice");
	scanf("%d",&ch);
	return ch;
}
void processList() {
	int ch;
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
