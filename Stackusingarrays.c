//Stack Implementation using arrays

#include<stdio.h>
#define SIZE 7
int STACK[SIZE];
int ele,top=-1;
void push();
void pop();
void display();
void main()
{
  int choice;
while(1)
  {
    printf("\nTo Display Stack Operations:\n");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    switch(choice)
{
  case 1:push();
          break;
  case 2: pop();
          break;
  case 3: display();
          break;
  case 4:printf("Exited the program\n");
         return;
         default:printf("Invalid choice\n");
}
}
}
void push()
{
  printf("Enter the element to be inserted to the stack\n");
  scanf("%d",&ele);
 if(top==(SIZE-1))
{
  printf("\nOVERFLOW\n");
}
else
{
  top++;
STACK[top]=ele;
}
}

 void pop()
{
 if(top==-1)
{
 printf("\nUNDERFLOW\n");
}
 else
{
 printf("The deleted element =%d",STACK[top]);
top--;
}
}

void display()
{
   printf("The Stack elements are :\n");
   if(top!=-1)
{
 for(int i=top;i>=0;i--)
    printf("%d\n",STACK[i]);
}
else
{
  printf("\nEmpty Stack\n");
}

}

































 
