#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node cdlist;
cdlist *head = NULL;
void insert(int e) {
	cdlist *t;
	if(head == NULL){
		head = (cdlist *)malloc(sizeof(cdlist));
		head->data = e;
		head->next = head;
		head->prev = head;
	}
	else {
		t = head;
		while(t->next != head) {
			t = t->next;
		}
		t->next = (cdlist *)malloc(sizeof(cdlist));
		t->next->data = e;
		t->next->next = head;
		t->next->prev = t;
		head->prev = t->next;
	}
}
void disp() {
	cdlist *t;
	if(head == NULL){
		printf("cdList is empty");
	}
	else {
		t = head;
		do {
			printf("%d\t",t->data);
			t = t->next;
		}while(t != head);
		printf("\n");
	}
}
void Delete(int e) {
	cdlist *t;
	if(head == NULL){ 
		printf("CDList is empty");
	}
	else if(head->data == e && head->next == head){ 
	    head = NULL;
	}
	else if(head->data == e) {
	    head->next->prev = head->prev;
	    head->prev->next = head->next;
	    head = head->next;
	}
	else {
		t = head->next;
		while(t != head && t->data != e){
			t = t->next;
		}
		if(t == head) {
			printf("Not Found");
		}
		else {   
			t->prev->next = t->next; 
			t->next->prev = t->prev;
		}
	}
}
int main(){
	int ch,i,n;
	for(i=0;i<n;i++){
		printf("1. Insert\n2. Display\n3. Delete\n4. Exit\nEnter your Choice");
		scanf("%d",&ch);
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
			default:
				printf("Wrong Choice");
				break;
		}				
	}
}
