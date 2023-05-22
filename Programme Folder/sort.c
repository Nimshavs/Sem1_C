#include<stdio.h>
#define N 5
int a[N];
int i;
int read(){
	for(i=0;i<5;i++){
		printf("enter the value of %d: ",i);
		scanf("%d",&a[i]);
	}
}
int disp(){
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);	
	}
int sort(){
	int j=0,temp;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}		
		}			
	}
	printf("The sorted element is:\n");
	disp();
}
int main(){
	int ch;
	for(i=0;i<10;i++){
		printf("\n1.Read\n2.Display\n3.Sort\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				read();
				break;
			case 2:
				disp();
				break;
			case 3:
				sort();
				break;
			default:
				printf("WRONG CHOICE");
				break;
		}
	}
}
