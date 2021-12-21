#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void main()
{
int c;
while(3>2)
{
printf("\n enter the choice");
printf("\n1-insert at beg \n2-last insert \n3-insert random \n4-delete at beg \n5-delete at last \n6-delete at random \n7-display \n8-exit \n");
scanf("%d",&c);
switch(c)
{
case 1:
beginsert();
break;
case 2:
lastinsert();
break;
case 3:
randominsert();
break;
case 4:
begin_delete();
break;
case 5:
last_delete();
break;
case 6:
lastinsert();
break;
case 7:
display();
break;
case 8:
exit(9);
default:
printf("\ninvlid");
break;
}
}
}
void beginsert()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow");
}
else
{
printf("\nenter value");
scanf("%d",&item);
ptr->data=item;
ptr->next=head;
head=ptr;
printf("\nnode inserted");
}
}
void lastinsert()
{
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow");
}
else
{
printf("\nenter value");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=head;
head=ptr;
printf("\nnode inserted");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
printf("\nnode inserted");
}
}
}
void randominsert()
{
int i,loc,item;
struct node *ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow");
}
else
{
printf("\nenter value");
scanf("%d",&item);
ptr->data=item;
printf("\nenter the location after which you want to insert");
scanf("%d",&loc);
temp=head;
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\ncan't insert");
return;
}
}
ptr->next=temp->next;
temp->next=ptr;
printf("\nnode inserted");
}
}
void begin_delete()
{
struct node *ptr;
if(head==NULL)
{
printf("\nlist is empty");
}
else
{
ptr=head;
head=ptr->next;
free(ptr);
printf("\nnode deleted from the beginning");
}
}
void last_delete()
{
struct node *ptr,*ptr1;
if(head==NULL)
{
printf("\nlist is empty");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("\nonly node of the list deleted");
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=NULL;
free(ptr);
printf("\nnode deleted from the end");
}
}
void random_delete()
{
int i,loc,item;
struct node *ptr,*ptr1;
printf("\nenter the location after which you want to delete");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
{
ptr1=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("\ncan't delete");
return;
}
ptr1->next=ptr->next;
free(ptr);
printf("\nnode deleted %d",loc+1);
}
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
printf("\nnothing to print");
else
{
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
}










