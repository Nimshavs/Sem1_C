#include<stdio.h>
int b=37;
int local (){
	int p=12;
	printf("the global variable is %d\n ",b);
	printf("the local variable is %d\n", p);
}
int stat (){
	static int c=4;
    printf("static value: %d\n",c++);
}
int regist(){
	register int a;
	a=8;
	printf("register value: %d\n",a);	
}
void main (){
	local();
	stat();
	stat();
	regist();
	stat();
}
