#include<stdio.h>
int stat(){
	static int a=0;
	a=a+1;
	printf("the value of static variable is:%d\n ",a);
}
int main(){
	stat();
	stat();
	stat();
}
