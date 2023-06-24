#pragma once
#include <iostream>
#include <iostream>
using namespace std;

short const SIZE = 20;
using namespace std;

const int NAME = 50;

class Airlines
{
	struct ListNode
	{
		char	FName = NAME;
		char	LName = NAME;
		char 	Priority;
		int		FltNum;
		char	value;

		ListNode* next;
	};
		ListNode* head;
	public:
		Airlines() { head = NULL; }
		ListNode pass;
		void appendNode();
		void displayReservation();
};

#include "Airline.h"

void Airlines::appendNode()
{
	ListNode* newNode, *nodePtr;
	newNode = new ListNode;
	cout << "Enter a first name\n";
	cin >> pass.FName;
	cout << "First Name: " << pass.FName << endl;
	newNode->value = pass.FName;
	newNode->next = NULL;

	newNode = new ListNode;
	cout << "Enter a last name\n";
	cin >> pass.LName;
	cout << "Last Name: " << pass.LName << endl;
	newNode->value = pass.LName;
	newNode->next = NULL;

	newNode = new ListNode;
	cout << "Enter a number\n";
	cin >> pass.FltNum;
	cout << "Fight Number: " << pass.FltNum << endl;
	newNode->value = pass.FltNum;
	newNode->next = NULL;

	newNode = new ListNode;
	cout << "Enter a boarding Priority\n";
	cin >> pass.Priority;
	if ((pass.Priority == 'G') || (pass.Priority == 'g'))
		cout << "Your boarding priority is gold\n";
	else if ((pass.Priority == 'S') || (pass.Priority == 's'))
		cout << "Your boarding priority is gold\n";
	newNode->value = pass.Priority;
	newNode->next = NULL;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}


void Airlines::displayReservation(void)
{
	ListNode* nodePtr;
	nodePtr = head;
	if (head == NULL)
		cout << "Your list is empty\n";
	else
	{
		while (nodePtr)
		{
			cout << nodePtr->value << endl;
			nodePtr = nodePtr->next;
		}
	}
}


int main()
{
	Airlines list;
	char prompt;
	char loop = 'y';
	do
	{
		cout << " AIRLINE RESERVATION SYSTEM \n";
		cout << "Press (E) to Enter passenger flight information " << endl;
		cout << "Press (D) to Display the passenger flight information " << endl;
		cout << "Press (Q) to Quit the program " << endl;
		cin >> prompt;

		switch (prompt)
		{
		case 'E':
		case 'e':
			list.appendNode();
			break;

		case 'D':
		case 'd':
			list.displayReservation();
			cout << endl;
			break;

		case 'Q':
		case 'q':
			loop = 'n';
			cout << "\nExiting the program..\n";
			break;

		default: cout << "this is an invalid choice. Please select prompt from the menu.\n";
		}system("pause");
	} while ((loop == 'Y') || (loop == 'y'));

	return 0;
}
struct node
{
	char name[SIZE];
	int age;
	float height;
	node *next;
};
node *start_ptr = NULL;
void push();
void pop();

void push()
{
	node *temp;
	
	temp = new node;
	cout << "Enter name of person: ";
	cin >> temp->name;
	cout << "Enter age of person: ";
	cin >> temp->age;
	cout << "Enter height of person: ";
	cin >> temp->height;

	if (start_ptr == NULL)
	{
		temp->next = NULL;
		start_ptr = temp;
	}
	else
	{
		temp->next = start_ptr;
		start_ptr = temp;
	}
}

void pop()
{
	node *temp1, *temp2;

	if (start_ptr == NULL)
		cout << "List is empty ";
	else
	{
		temp1 = start_ptr;
		temp2 = temp1;

		while (temp1->next != NULL)
		{
			temp2 = temp1;
			temp1 = temp1->next;
		}

		if (temp1 == temp2)
		{
			cout << "Name is: " << temp1->name << endl;
			cout << "Age is: " << temp1->age << endl;
			cout << "Height is: " << temp1->height << endl;
			start_ptr = NULL;
		}
		else
		{
			cout << "Name is: " << temp1->name << endl;
			cout << "Age is: " << temp1->age << endl;
			cout << "Height is: " << temp1->height << endl;
			temp2->next = NULL;
		}
	}
}

int main()
{
	char prompt;
	system("cls");
	cout << "QUEUE\n";
	cout << "------\n";

	do
	{
		cout << "Select an operation:\n";
		cout << "p->push\n";
		cout << "o->pop\n";
		cout << "q->quit\n";
		cin >> prompt;

		switch (prompt)
		{
		case 'p':
		case 'P':
			push();
			break;
		case 'o':
		case 'O':
			pop();
			break;
		case 'q':
		case 'Q':
			exit(0);
		}
	} while ((prompt != 'q') || (prompt != 'Q'));

		return 0;
}
