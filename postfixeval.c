//Stack Applications evaluation of postfix expressions

#include<stdio.h>
#include<math.h>
#include<string.h>
#define SIZE 100 
int top=-1;
int STACK[SIZE];
void push(int value);
int pop();
int is_operand(char ch);
void main()
{
   char postfix[SIZE],ch;
   int i=0,m,result,op1,op2;
printf("\nEnter the postfix expression:\n");
gets(postfix);
while(postfix[i]!='\0')
{
  ch=postfix[i];
if(is_operand(ch)==1)
{
printf("Enter the value of %c:",ch);
scanf("%d",&m);
push(m);
}
 else
{
 op2=pop();
op1=pop();
 switch(ch)
{
 case '+':result=op1+op2;
          push(result);
          break;
 case '-':result=op1-op2;
          push(result);
          break;
 case '*':result=op1*op2;
          push(result);
          break;
 case '/':result=op1/op2;
          push(result);
          break;
 case '%':result=op1%op2;
          push(result);
          break;
 case '^':result=pow(op1,op2);
          push(result);
          break;
}
}
 i++;
}
result=pop();
printf("The result=%d\n",result);
}

void push(int value)
{
 top++;
STACK[top]=value;
}
 int pop()
{
 int a;
a=STACK[top];
top--;
return a;
}

int is_operand(char ch)
{
  if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
return 1;
else 
return 0;
}






























 
