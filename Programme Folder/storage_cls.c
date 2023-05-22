#include<stdio.h>
int a=30,b=24;
int local(){
	int a=9;
	printf("the local variable :%d\n",a);
}
int stat(){
	static int i;		
	printf("the static value :%d\n",i++);	
	
}

int reg(){
	register int i;
	int s;
	s=0;
	for(i=0;i<=4;i++){
		s=s+i;
	}
	printf("the register value :%d\n",s);	
}
int main(){
	local();
	printf("the global variable : a=%d , b=%d\n",a,b);
	stat();
	reg();
	stat();
	stat();
	reg();
	local();
	
}
