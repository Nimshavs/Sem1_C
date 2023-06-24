#include <stdio.h>
int f=-1,r = -1;
int q[5];
void enqueue(int e) //inserting an element on to the queue
{
 if(((r + 1) % 5) == f) //% reminder of the integer divison
 {
 printf("\nQueue is full");
 }
 else
 {
 if(f == -1)
 {
 f = 0;
 }
 r = ((r + 1) % 5);
 q[r] = e;
 }
}
void dequeue()
{
 if(f == -1)
 {
 printf("\nQueue Empty");
 }
 else
 {
 printf("\nItem : %d",q[f]);
 if(f == r)
 {
 f = r = -1;
 }
 else
 {
 f = ((f + 1) % 5);
 }
 }
}
int main()
{
 enqueue(10);
 enqueue(20);
 enqueue(30);
 dequeue();
 enqueue(40);
 enqueue(50);
 enqueue(60);
 enqueue(70);
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 return 0;
}
