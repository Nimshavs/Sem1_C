#include<stdio.h>
#define N 10
struct employee
{
	int eno;
	char ename[10];
	int esal;
	int dno;
};
void read(struct employee emp[N],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the eno of employee %d:",i+1);
		scanf("%d",&emp[i].eno);
		printf("Enter the ename of employee %d:",i+1);
		scanf("%s",emp[i].ename);
		printf("Enter the esal of employee %d:",i+1);
		scanf("%d",&emp[i].esal);		
		printf("Enter the dno of employee %d:",i+1);
		scanf("%d",&emp[i].dno);
		printf("\n");
	}
}
void display(struct employee emp[N],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("emp no:%d\n",emp[i].eno);
		printf("ename :%s\n",emp[i].ename);
		printf("esal no:%d\n",emp[i].esal);
		printf("dno no:%d\n",emp[i].dno);
		printf("\n");
	}
}
void search(struct employee emp[],int n)
{
	int no,i,flag=-1;
	printf("Enter the eno to search :");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(emp[i].eno==no)
		{
			flag=i;
			break;
		}
	}
	if(flag !=-1)
	{
		printf("\n**Details**\n");
		printf("emp no:%d\n",emp[flag].eno);
		printf("ename:%s\n",emp[flag].ename);
		printf("esal no:%d\n",emp[flag].esal);
		printf("dno no:%d\n",emp[flag].dno);
		printf("\n");
	}
	else
	{
		printf("\nEmployee not found");
	}
}
void sortBySalary(struct employee emp[N],int n)
{
	printf("\n sorted by salary\n");
	int i,j;
	struct employee temp;
	char name[N];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(emp[j].esal > emp[j+1].esal)
			{
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}

}
void sortByName(struct employee emp[N],int n)
{
	printf("\n sorted bu name\n");
	int i,j;
	struct employee temp;
	char name[N];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(emp[j].ename,emp[j+1].ename) > 0)
			{
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}	
}

void deleteemp(struct employee emp[N],int n)
{
	int num,i,j,flag=-1;
	printf("Enter the eno to delete:");
	scanf("%d",&num);
	printf("\n number is:%d\n",num);
	for(i=0;i<n;i++)
	{
		if(emp[i].eno==num)
		{
			flag=i;
			break;
		}
	}
	if(flag == -1)	
	{
		printf("\n not found\n");
	}
	else
	{
		for(j=flag;j<n-1;j++)
		{
			emp[j]=emp[j+1];
		}
		printf("Deleted the Employee with the ID %d\n", flag);
	}		
}
int main()
{
	int n;
	struct employee emp[N];
	printf("Enter the number of employee:");
	scanf("%d",&n);
	read(emp,n);
	display(emp,n);
	sortBySalary(emp,n);
	display(emp,n);
	sortByName(emp,n);
	display(emp,n);
	search(emp,n);
	deleteemp(emp,n);
	return 0;
}

