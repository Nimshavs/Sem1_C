#include<stdio.h>
int q[10];
int f,r;
void enqueueFront(int a)
{
 int i;
 if(r+1 == 10)
 printf("\nQ Full");
 else
 {
 if(r == -1) 
 f = 0;
 for(i=r;i>=0;i--) 
 {
 q[i+1] = q[i];
 }
 q[i+1] = a; 
 r = r + 1;
 }
}
void enqueueRear(int a)
{
 if(r+1 == 10)
 printf("\nQ Full");
 else
 {
 if(r == -1)
 f = 0;
 q[r+1] = a;
 r = r + 1;
 }
}
void dequeueFront()
{
 int i;
 if(f == -1)
 printf("\nQ is empty");
 else
 {
 printf("\n%d %d %d",f,r,q[0]);
 for(i=0;i<r;i++) 
 {
 q[i] = q[i+1];
 } 
 r = r - 1;
 if(r == -1) 
 f = -1;
 }
}
void dequeueRear()
{
 int i;
 if(f == -1)
 printf("\nQ is empty");
 else
 {
 printf("\n%d %d %d",f,r,q[r]);
 r = r - 1;
 if(r == -1)
 f = -1;
 }
}
int main()
{
 f = r = -1;
 enqueueFront(10);
 enqueueFront(20);
 enqueueFront(30);
 enqueueFront(40);
 dequeueRear();
 dequeueRear();
 dequeueFront();
 dequeueFront();
 dequeueFront();
 dequeueFront();
 return 0;
}
