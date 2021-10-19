#define size 10
#include<stdio.h>
#include<stdlib.h>
int a[size];
int top=-1;
int push(int x)
{
top+=1;
a[top]=x;
return x;
}
int pop()
{
printf("%d",a[top]);
top-=1;
return 0;
}
int isempty()
{
int k;
if(top==-1)
 k=6;
 return(k);
}
int isfull()
{
int m;
if(top==size-1)
 m=8;
 return(m);
}
void display()
{int g=isempty();
if(g==6)
 printf("stack is empty");
else
 {
  int i;
  printf("stack elements are:");
  for(i=top;i>=0;i--)
  printf("%d\n",a[i]);
 }
}
void main()
{
int value,choice,d,e;
while(1)
{
printf("press 1-push\n 2-pop\n 3-display\n 4-exit");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
d=isfull();
if(d==8)
 printf("stack is full");
else
{
 printf("enter the value to be inserted");
 scanf("%d",&value);
 push(value);}
 break;
case 2:
e=isempty();
if(e==6)
 printf("no more value to be popped out");
else
 pop();
 break;
case 3:
 display();
 break;
case 4:
 exit(0);
default:
 printf("invalid input");
}}}
