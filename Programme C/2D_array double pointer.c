#include <stdio.h>
#include <stdlib.h>
int r, c, len = 0;
int  i, j,cnt=0;
int main(){
	printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    printf("Enter the Number of Columns: ");
    scanf("%d", &c);
    int *ptr, **a;
    len = sizeof(int *) * r + sizeof(int) * c * r;
    a = (int **)malloc(len);
    ptr = (int *)(a + r);
    for (i = 0; i < r; i++)
    a[i] = (ptr + c * i);
    for (i = 0; i < r; i++){
    	for (j = 0; j < c; j++)
        a[i][j] = i+j+1;
	}
	for (i = 0; i < r; i++){
		 for (j = 0; j < c; j++)
        printf("%d ", a[i][j]);
        printf("\n");
	}
	return 0;
}
