#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

void reserve(int x), cancel(), display(), savefile(),flightDetails();
char airport1[100];
char airport2[100];
struct airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	int flight_number;
	struct airline *following;
}*begin, *stream;

struct reservation_struct {
	int flight_number;
	char departure_airport[4];
	char arrival_airport[4];
};


struct airline *dummy;


void main()
{
	struct reservation_struct reservations[20] = {
		{ 3269, "CLE", "BOS"},
		{ 4189, "BOS", "CLE"},
		{ 603,  "JFK", "ORD"},
		{ 900,  "CLE", "MDW"},
		{ 1337, "BOS", "ORD"},
		{ 9027, "CLE", "MSP"},
		{ 6167, "CLE", "SJC"},
		{ 8887, "CLE", "SEA"},
		{ 1230, "CLE", "NUQ"},
		{ 9723, "BOS", "ANK"},
		{  723, "MSP", "JUN"}
	};
	
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

void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);
	printf("\n\t Enter your name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); fflush(stdin);
    printf("\n\t Enter the Flight Number : ");
    scanf("%d",stream->flight_number); fflush(stdin);
}



void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct airline*)malloc(sizeof(struct airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		//to traverse to last of list
		while (stream->following)
		stream = stream->following;
		stream->following = (struct airline *)malloc(sizeof(struct airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
}


void savefile()
{
	FILE *fpointer = fopen("air_records", "w");
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
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
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


void flightDetails(struct reservation_struct flight[30]){
	int i;
	
	printf("Enter airport code: ");
	fgets(airport1, sizeof(airport1), stdin);
	airport1[strlen(airport1) - 1] = '\0';          /* trim newline */

	printf("Enter another airport code: ");
	fgets(airport2, sizeof(airport2), stdin);
	airport2[strlen(airport2) - 1] = '\0';          /* trim newline */

	printf("You entered: %s, %s\n\n", airport1, airport2);

	/* Look for all airports leaving from either of those */
	for (i = 0; i < sizeof(flight); ++i) {
		if ((strncmp(flight[i].departure_airport, airport1, sizeof(airport1)) == 0) ||
			(strncmp(flight[i].departure_airport, airport2, sizeof(airport2)) == 0)) {
					printf("Found flight %d: %s -> %s\n", flight[i].flight_number,
							flight[i].departure_airport, flight[i].arrival_airport);
		}
	}


//	char depAir[5],arrAir[5];
//	printf("\nEnter the Departure Airport: ");
//	getchar();
//	gets(depAir);
//	printf("\nEnter the Arrival Airport: ");
//	getchar();
//	gets(arrAir);
//	printf("\n**********************AIRPORT DETAILS*********************");
//	for(i=0;i<11;i++){
//		if(strcmp(depAir,flight[i].departure_airport) && strcmp(arrAir,flight[i].arrival_airport)){
//			printf("\nFLIGHT NUMBER: %d",flight[i].flight_number);
//			printf("\nFOUND FLIGHT : %s -> %s",flight[i].departure_airport,flight[i].arrival_airport);			
////			printf("\nARRIVAL AIRPORT: %s",flight[i].arrival_airport);
//		}
//	}		
}
