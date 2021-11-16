#include<stdio.h>
#define size 5
int a[size];
int f=-1,r=-1;
int isfull()
{
if((f==r+1) || (f==0 && r==size-1))
return 1;
return 0;
}
int isempty()
{
if(f==-1)
return 1;
return 0;
}
int enqueue()
{
int e;
if(isfull())
printf("queue is full \n");
else
{
if(f==-1)
f=0;
printf("Enter the element to be inserted in the queue\n");
scanf("%d",&e);
r=(r+1)%size;
a[r]=e;
printf("inserted element is %d\n",e);
}
return 0;
}
int dequeue()
{
int e;
if(isempty())
{
printf("queue is empty \n");
return(-1);
}
else
{
e=a[f];
if(f==r)
{
f=-1;
r=-1;
}
else
{
f=(f+1)%size;
}
printf("deleted element is %d \n",e);
return(e);
}
}
void display()
{
int i;
if(isempty())
printf("queue is empty\n");
else
{
printf("queue is:\n");
for(i=f;i!=r;i=(i+1)%size)
printf("%d\n",a[i]);
printf("%d\n",a[i]);
}}
void main()
{
int choice;
while(3>2)
{
printf("select any one option\n");
printf("1-display \n2-enqueue \n3-dequeue \n4-exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
display();
break;
case 2:
enqueue();
break;
case 3:
dequeue();
break;
case 4:
exit(4);
default:
printf("Invalid input\n");
break;
}}}


