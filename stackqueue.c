#include <stdio.h>
#include <stdlib.h>
struct node
{
int val;
struct node *next;
};
struct node *head;

void main1()
{
    int choice=0;
    printf("\n****Stack operations using linked list****\n");
    printf("\n----------------------------------------------\n");
    while(3>2)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(4);
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
    }
}
}
void push()
{
    int val;
    struct node ptr= (struct node)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val = val;
            ptr -> next = NULL;
            head=ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head=ptr;

        }
        printf("Item pushed");

    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped");

    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr = ptr->next;
        }
    }
}
struct node1
{
    int data;
    struct node *next1;
};
struct node1 *front;
struct node1 *rear;
void main2 ()
{
    int ch;
    while(ch != 4)
    {
        printf("\n****Queue operations using linked list****\n");
    printf("\n----------------------------------------------\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d",& ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display1();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nEnter valid choice??\n");
        }
    }
}
void insert()
{
    struct node1 *ptr1;
    int item1;

    ptr1 = (struct node1 *) malloc (sizeof(struct node1));
    if(ptr1 == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item1);
        ptr1 -> data = item1;
        if(front == NULL)
        {
            front = ptr1;
            rear = ptr1;
            front -> next1 = NULL;
            rear -> next1 = NULL;
        }
        else
        {
            rear -> next1 = ptr1;
            rear = ptr1;
            rear->next1 = NULL;
        }
    }
}
void delete ()
{
    struct node1 *ptr1;
    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr1 = front;
        front = front -> next1;
        free(ptr1);
    }
}
void display1()
{
    struct node1 *ptr1;
    ptr1 = front;
    if(front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {   printf("\nprinting values .....\n");
        while(ptr1 != NULL)
        {
            printf("\n%d\n",ptr1 -> data);
            ptr1 = ptr1 -> next1;
        }
    }
}
void main()
{
int c;
    while(3>2)
    {
        printf("\n1.Stack \n2.Queue \n3.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d",& c);
        switch(c)
        {
            case 1:
            main1();
            break;
            case 2:
            main2();
            break;
            case 3:
            exit(3);
            break;
            default:
            printf("\nEnter valid choice??\n");
        }
    }
}
