#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,j,count=0,mode=0,max=0,value=0;;
	printf("Enter the size:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof (int));
	for(i=0;i<n;i++)
	{
		printf("Enter p[%d]:",i);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]==p[j])
			{
				count=count+1;
			}
		}
		if(count > max)
		{
			max=count;
			value=p[i];
		}	
	}
	printf("mode is=%d",value);
	free(p);
}

