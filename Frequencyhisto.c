//Frequency histogram

#include<stdio.h>
int a[100],n,i,j;
int frequency[10]={0};
void storedata();
void display();
void makefrequency();
void makehistogram();
void main()
{
  int choice;
while(1)
  {
    printf("\n Frequency Histogram\n");
    printf("\n1.Store data\n2.Display\n3.Make Frequency\n4.Make Histogram\n5.Exit\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    switch(choice)
{
  case 1:storedata();
         break;
case 2:display();
         break;
case 3:makefrequency();
         break;
case 4:makehistogram();
         break;
case 5: printf("Exited the program\n");
      return;
       default:printf("Invalid choice\n");
}
}
}


void storedata()
{
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
printf("Enter the elements between the range 0-9:\n");
   for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
   printf("Done storing\n");
}

void display()
{
   printf("The elements stored are :\n");
   for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}printf("\n");
   printf("Done Displaying\n");
}

void makefrequency()
{
  for(i=0;i<10;i++)
{
  for(j=0;j<n;j++)
{
 if(a[j]==i)
  frequency[i]+=1;
}
}
}

void makehistogram()
{
 printf("Frequency Histogram\n");
 for(i=0;i<10;i++)
{
  if(frequency[i]!=0)
{
  printf("[%d]: ",i);
 for(j=0;j<frequency[i];j++)
 printf("*");
}
 else{
     printf("[%d]: ",i);
}printf("\n");
}
}
































 
