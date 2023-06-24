#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,n;
	a=(int *)malloc(n*sizeof (int));
	*a=20;
	printf("%d",*a);
	free(a);
}
