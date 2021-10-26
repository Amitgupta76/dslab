#include<stdio.h>
#include<ctype.h>
int s[20],top=-1;
void push(int x)
{
s[top]=x;
}
int pop()
{
return s[top--];
}
void main()
{
char exp[20],*e;
int a,b,c,num;
printf("enter the expression");
scanf("%s",exp);
e=exp;
while(*e!='\0')
{
if(isdigit(*e))
{
num=*e-48;
push(num);
}
else
{
a=pop();
b=pop();
switch(*e)
{
case '+':
 c=a+b;
 break;
case '-':
 c=a-b;
 break;
case '*':
 c=a*b;
 break;
case '/':
 c=a/b;
 break;
}
push(c);
}
e++;
}
printf("res=%d",pop());
}
