#include<stdio.h>
int a=10,b=60;
int local(){
	int a=30;
	printf("the value of local variable: %d\n ",a);
}
int stat(){
	static int a;
	printf("the value of static variable: \t");
	for(a=0;a<4;a++)
	printf("%d\t",a);
}
int main(){
	local();
	printf("the value of global variable: a=%d b=%d\n",a,b);
	stat();
}
