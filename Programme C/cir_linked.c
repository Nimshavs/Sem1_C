#include <stdio.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node clist;
clist *head = NULL;
void insert(int e) {
	clist *t;
	if(head == NULL){
		head = (clist *)malloc(sizeof(clist));
		head->data = e;
		head->next = head;
	}
	else {
		t = head;
		while(t->next != head) {
			t = t->next;
		}
		t->next = (clist *)malloc(sizeof(clist));
		t->next->data = e;
		t->next->next = head;
	}
	disp();
}
void disp() {
	clist *t;
	if(head == NULL){
		printf("CList is empty");
	}
	else {
		t = head;
		do{
			printf("%d\t",t->data);
			t = t->next;
		}
		while(t != head);
		printf("\n");
	}
}
void Delete(int e) {
	clist *t;
	if(head == NULL){ // list is empty
		printf("CList is empty");
	}
	else if(head->data == e && head->next == head){ // first element with no element or several elements
		head = NULL;
	}
	else if(head->data == e){
		for(t = head;t->next != head;t = t->next)
		;
		t->next = head->next;
		head = head->next;
	}	
	else {
		t = head;
		while(t->next != head && t->next->data != e){
			t = t->next;
		}
		if(t->next == head){ // not found
			printf("Not found");
		}
		else {   //intermediate or last node
			t->next = t->next->next; 
		}
	}
	disp();
}
void main() {
	int ch,i,n;
	for(i=0;i<n;i++){
		printf("\n1.Insert\n2.Delete\n3.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the element to be inserted: ");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				printf("Enter the element to be deleted: ");
				scanf("%d",&ch);
				Delete(ch);
				break;
			default:
				printf("WRONG CHOICE");
				break;
		}
	}
}
