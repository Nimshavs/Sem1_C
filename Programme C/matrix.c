#include<stdio.h>
#define N 5
int a[N][N],b[N][N],sum[N][N],sub[N][N],mul[N][N],t[N][N],r,c;
void read(int op)
{
	int i,j,n,ans;
	if(op==1 || op==2 ||op==3)
	{
		printf("Enter the r & c:");
		scanf("%d%d",&r,&c);
		printf("\nMetrix1:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter Element to array a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);	
			}
		}
		printf("\nMetrix2:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter Element to array b[%d][%d]:",i,j);
				scanf("%d",&b[i][j]);	
			}
		}
	}
	else if(op==4)
	{
		printf("Enter the r & c:");
		scanf("%d%d",&r,&c);
		printf("\nMetrix1:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter Element to array a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);	
			}
		}
			
	}
	else if(op==5)
	{
		printf("Enter the order of mertix:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter Element to array a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		ans=det(a,n);
		printf("The determinant is:%d",ans);
	}
}
void display(int a[N][N],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
}
void add()
{
	int i,j,sum[N][N];
	for (i = 0; i < r;i ++)
	{
    	for (j = 0; j < c;j++) 
		{
      		sum[i][j] = a[i][j] + b[i][j];
    	}
    }
    display(sum,r,c);
}
void subtraction()
{
	int i,j,sub[N][N];
	for (i = 0; i < r;i ++)
	{
    	for (j = 0; j < c;j++) 
		{
      		sub[i][j] = a[i][j] - b[i][j];
    	}
    }
    display(sub,r,c);
}
void multiplication()
{
	int i,j,mul[N][N],k;
	for (i = 0; i < r;i ++)
	{
    	for (j = 0; j < c;j++) 
    	{
    		mul[i][j]=0;
    		for(k=0;k<c;k++)
    		{
    			mul[i][j]=a[i][k]*b[k][j];	
			}
    	}
	}
	display(mul,r,c);
}
int trans()
{
	int i,j;
	int t[N][N];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	display(t,r,c);
}
int det(int a[N][N],int n)
{
    int Minor[N][N],i,j,k,c1,c2,determinant,c[N],O=1;
    if(n == 2)
    {
        determinant = 0;
        determinant = a[0][0]*a[1][1]-a[0][1]*a[1][0];
        return determinant;
       // printf("The determinant:",determinant);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            c1=0,c2=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(j!=0 && k!=i)
                    {
                        Minor[c1][c2]=a[j][k];
                        c2++;
                        if(c2>n-2)
                        {
                            c1++;
                            c2=0;
                        }
                    }
                }
            }
            determinant = determinant + O*(a[0][i]*det(Minor,n-1));
            O=-1*O;
        }
    }
    return determinant;

}
int main()
{
	int op;
	while(op !=5)
	{
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Determinant\nEnter Your option:");
	scanf("%d",&op);
	switch(op)
	{
		case 1: read(1);
				add();
				break;
		case 2: read(2);
				subtraction();
				break;
		case 3: read(3);
				multiplication();
				break;
		case 4: read(4);
				trans();
				break;
		case 5:	read(5);
				break;
		default:printf("Wrong option\n");			
	}
	}	
}

