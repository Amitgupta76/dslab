#include<stdio.h>
#define size 5
int a[size];
int r=-1,f=-1;
int display()
{
int i;
if(f==-1)
printf("Queue is empty \n");
else
{
printf("Queue is: \n");
for(i=f;i<=r;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
return 0;
}
int enqueue()
{
int x;
if(r==size-1)
printf("Queue overflow\n");
else
{
if(f==-1)
f=0;
printf("Enter the element to be inserted in the queue\n");
scanf("%d",&x);
r++;
a[r]=x;
}
return 0;
}
int dequeue()
{
if(f==-1 && r==-1)
printf("Queue is empty\n");
else
{
if(f>r)
{
f=-1;
r=-1;
printf("Queue is empty\n");
}
else
{
printf("Deleted Element is: %d\n",a[f]);
f++;
}}
return 0;
}
void main()
{
int choice;
while(3>2)
{
printf("Select any one option\n");
printf("1-Display \n2-Enqueue \n3-Dequeue \n4-exit \n");
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
}
}
}