#include<stdio.h>
struct date{
	int dd;
	int mm;
	int yyyy;	
};
struct date d1,d2;
int read(){	
	printf("Enter the first date :");
	printf("\nEnter dd: ");
	scanf("%d",&d1.dd);
	printf("\nEnter mm: ");
	scanf("%d",&d1.mm);
	printf("\nEnter yyyy: ");
	scanf("%d",&d1.yyyy);
	printf("Enter the second date :");
	printf("\nEnter dd: ");
	scanf("%d",&d2.dd);
	printf("\nEnter mm: ");
	scanf("%d",&d2.mm);
	printf("\nEnter yyyy: ");
	scanf("%d",&d2.yyyy);
	
}
int disp(){
	printf("first date: %d/%d/%d",d1.dd,d1.mm,d1.yyyy);
	printf("\nsecond date: %d/%d/%d",d2.dd,d2.mm,d2.yyyy);
	printf("\n");
}


int compare(){
	if(d1.dd==d2.dd,d1.mm==d2.mm,d1.yyyy==d2.yyyy)
		printf("The dates are equal");
	else
		printf("The dates are not equal");
}


int main(){
	read();
	disp();
	compare();
}
