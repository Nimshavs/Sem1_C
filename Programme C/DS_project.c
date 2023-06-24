#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	int flight_number;
	struct airline *following;
}
*begin, *stream;
struct airline *dummy;

struct reservation_struct {
	int flight_number;
	char departure_airport[4];
	char arrival_airport[4];
	int noOfSeatsAvailable;
};
	struct reservation_struct reservations[20] = {
		{ 3269, "CHE", "BOM",10},
		{ 4189, "BOM", "CHE",10},
		{ 603,  "KOL", "DEL",5},
		{ 900,  "CHE", "COK",6},
		{ 1337, "BOM", "DEL",3},
		{ 9027, "CHE", "TVM",4},
		{ 6167, "COK", "BAN",0},
		{ 8887, "CHE", "DEL",1},
		{ 1230, "DEL", "CHE",9},
		{ 9723, "BOM", "COK",6},
		{  723, "TVM", "KOL",4}
	};

struct reservation_struct res;

void main()
{
	void reserve(int x), cancel(), display(), savefile(),flightDetails(struct reservation_struct flight[20]);
	
	int choice;
	begin = stream = NULL;
	int num = 1;
	do
	{

		printf("\n\n\t*******************************************************************");
		printf("\n\t                  AIRLINE BOOKING SYSTEM                  ");
		printf("\n\t*******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. Records");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t Enter your choice :");



		scanf("%d", &choice); fflush(stdin);
		system("cls");
		switch (choice)
		{
		case 1:
			flightDetails(reservations);
			
			reserve(num);
			num++;
			break;
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		{
				  savefile();
				  break;
		}
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch();
	} while (choice != 4);
}

int details()
{
	
	int i=0;
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);
	printf("\n\t Enter your name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); //fflush(stdin);
    printf("\n\t Enter the Flight Number : ");
    int fNo;
    scanf("%d",&fNo); fflush(stdin);
    stream->flight_number=fNo;
//	printf("\nFlightNum:Strea,:%d",fNo);
    while(reservations[i].flight_number!=stream->flight_number){
//    	printf("\nFlightNum:Strea,:%d",reservations[i].flight_number);
    	i++;    	
	}
	if(reservations[i].noOfSeatsAvailable<1){
    	printf("\nNo Seats Available Please check Other Schedules!");
    	return 0;
	}
	else{
		reservations[i].noOfSeatsAvailable=reservations[i].noOfSeatsAvailable-1;
		return 1;
	}
}

int details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct airline*)malloc(sizeof(struct airline));
		int c=details();
		if(c==1){
			stream->following = NULL;
			printf("\n\t Seat booking succesful!");
			printf("\n\t your seat number is: Seat A-%d", x);
			stream->seat_num = x;
			return;
		}
		else{
			printf("\n\tBooking Failed!");
			x--;
			return;
		}
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{

		while (stream->following)
			stream = stream->following;
		stream->following = (struct airline *)malloc(sizeof(struct airline));
		stream = stream->following;
		int c=details();
		if(c==1){
			stream->following = NULL;
			printf("\n\t Seat booking succesful!");
			printf("\n\t your seat number is: Seat A-%d", x);
			stream->seat_num = x;
			return;
		}
		else{
			printf("\n\tBooking Failed!");
			x--;
			return;
		}

	}
}

void savefile()
{
	FILE *fpointer = fopen("air_records", "a+");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800);
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);
		fprintf(fpointer, "%-15s", stream->name);
		fprintf(fpointer, "%-15s", stream->email);
        fprintf(fpointer, "%-15s", stream->destination);
        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file");
	fclose(fpointer);
}


void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-15s", stream->passport);
		printf("\n              name : %-15s", stream->name);
		printf("\n      email address: %-20s", stream->email);
		printf("\n        Seat number: A-%d", stream->seat_num);
        printf("\n        Destination:%-15s", stream->destination);
        printf("\n      Flight Number:%d", stream->flight_number);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;
	}

}

void cancel()
{
	stream = begin;
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:");
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");

}

void flightDetails(struct reservation_struct flight[20]){
	
	int i,flag=0;
	char depAir[5],arrAir[5];
	printf("\n\n\t*******************************************************************");
	printf("\n\t                  AVAILABLE FLIGHTS                 ");
	printf("\n\t*******************************************************************");
	
	printf("\n\nCHENNAI (CHE) --> BOMBAY (BOM)\n BOMBAY (BOM)--> CHENNAI (CHE)");
	printf("CHENNAI (CHE) --> KOCHI (COK)\n CHENNAI (CHE) --> BANGALORE (BAN)");
	printf("CHENNAI (CHE) --> TRIVANDRUM (TVM)\n CHENNAI (CHE) --> DELHI (DEL) ");
	printf("KOLKATA (KOL) --> DELHI (DEL)\n BOMBAY (BOM) --> DELHI (DEL) ");
	printf("KOCHI (COK) --> BANGALORE (BAN)\n DELHI (DEL) --> CHENNAI (CHE) ");
	printf("BOMBAY (BOM) --> KOCHI (KOC)\n TRIVANDRUM (TVM) --> KOLKATA (KOL)\n\n");
	printf("\nEnter the Departure Airport: ");
	gets(depAir);
	printf("\nEnter the Arrival Airport: ");
	gets(arrAir);
	printf("\n%s",depAir);
	printf("\n%s",arrAir);
	printf("\n**********************AIRPORT DETAILS*********************");
		for(i=0;i<11;i++){
		if(strcmp(depAir,flight[i].departure_airport)==0 && strcmp(arrAir,flight[i].arrival_airport)==0){
			
			printf("\nFLIGHT NUMBER: %d",flight[i].flight_number);
			printf("\nDEPARTURE AIRPORT: %s",flight[i].departure_airport);			
			printf("\nARRIVAL AIRPORT: %s",flight[i].arrival_airport);
			printf("\nNO OF SEATS AVAILABLE: %d",flight[i].noOfSeatsAvailable);
			printf("\n************************************\n");
			flag=1;
		}
		
	}
	
	if(flag==0)
	{
				printf("\n\t\t\tFLIGHT NOT AVAILABLE\n");
				printf("please choose again");
				Sleep(4000);
				system("cls");
				flightDetails(reservations);
			
		}	

}

