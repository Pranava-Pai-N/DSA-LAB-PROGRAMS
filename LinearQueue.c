//Implementation of Linear Queue using Arrays

#include<stdio.h>
#define size 7
int queue[size],ele,i;
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
int choice;
while(1)
{
 printf("\nLinear-Queue Operations\n");
   printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    switch(choice)
{
  case 1:enqueue();
          break;
  case 2: dequeue();
          break;
  case 3: display();
          break;
  case 4:printf("Exited the program\n");
         return;
         default:printf("Invalid choice\n");
}
}
}
void enqueue()
{
 if(rear==(size-1))
{
  printf("\nQUEUE OVERFLOW\n");
}
else
{
printf("Enter the element to be inserted to the Linear Queue\n");
scanf("%d",&ele);
  if(front==-1)
{
  front++;
}
rear++;
queue[rear]=ele;
}
}

 void dequeue()
{
 if(rear==-1||front>rear)
{
 printf("\nQUEUE UNDERFLOW\n");
}
 else
{
 printf("The deleted element =%d",queue[front]);
front++;
}
}

void display()
{
if(rear==-1||front>rear)
{
  printf("QUEUE IS EMPTY\n");
}
 else
{
  printf("The Elements of the Linear Queue are :\n");
  for(i=front;i<=rear;i++)
{
 printf("%d\t",queue[i]);
}
}
}



