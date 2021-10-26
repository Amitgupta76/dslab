#include<stdio.h>
#include<ctype.h>
#define size 50
char s[size];
int top=-1;
int push(char e)
{
s[++top]=e;
}
char pop()
{
return(s[top--]);
}
int p(char a)
{
if(a=='^')
 return(3);
else if(a=='*' || a=='/')
 return(2);
else if(a=='+' || a=='-')
 return(1);
else
 return(0);
}
void main()
{
char infix[50],postfix[50],ch,elem;
int i=0,k=0;
printf("enter the infix expression");
scanf("%s", infix);
push('#');
while((ch=infix[i++])!='\0')
{
if(ch=='(')
 push(ch);
else if(isalnum(ch))
 postfix[k++]=ch;
else if(ch==')')
{
while(s[top]!='(')
 postfix[k++]=pop();
 elem=pop();
}
else
{
while(p(s[top])>=p(ch))
 postfix[k++]=pop();
push(ch);
}
}
while(s[top]!='#')
 postfix[k++]=pop();
postfix[k]='\0';
printf("\npostfix exp=%s\n",postfix);
}
