#include<stdio.h>
#include<stdlib.h>
struct node
{
	char usn[12];
	char name[20];
	char dept[20];
	int marks1,marks2,marks3;
	long phoneno;
	struct node *prev;
	struct node *next;
};
 struct node *head=0,*tail;
void create();
void display();
void insertatend();
void deleteatend();
void insertatfront();
void deleteatfront();
void total();
  void main()
{
  int choice;
 while(1)
{
 printf("\nDoubly Linked List Operations\n");
 printf("\n1.Create\n2.Display\n3.Insert at Front\n4.Insert at end\n5.Delete at Front\n6.Delete at End\n7.Exit\n");
 printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:create();
	       break;
	case 2:display();
	       break;
	case 3:insertatfront();
	       break;
	case 4:insertatend();
	       break;
	case 5:deleteatfront();
	       break;
	case 6:deleteatend();
	       break;
	case 7:return;
	       break;
}
}
}


void create()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter Student Information\n");
	printf("\nEnter Student Name : ");
	scanf("%s", newnode->name);
	printf("Enter Student USN : ");
	scanf("%s", newnode->usn);
	printf("Enter marks 1 : ");
	scanf("%d", &newnode->marks1);
	printf("Enter marks 2 : ");
	scanf("%d", &newnode->marks2);
	printf("Enter marks 3 : ");
	scanf("%d", &newnode->marks3);
	printf("Enter Department Name : ");
	scanf("%s", newnode->dept);
	printf("Enter Phone number : ");
	scanf("%ld",&newnode->phoneno);
	newnode->next=0;
	newnode->prev=0;
	if(head == 0)
		head = tail = newnode;
	else{
		tail->next = newnode;
		newnode->prev=tail;
		tail = newnode;
	}
}



void display()
{
struct node *temp1;
int count=0;
temp1=head;
printf("-------------Student Information-------------\n");
  while(temp1!=0)
{
  float avg=0;
  printf("Name = %s\n",temp1->name);
  printf("USN = %s\n",temp1->usn);
  printf("Department = %s\n",temp1->dept);
  printf("Mark 1 = %d\n",temp1->marks1);
  printf("Mark 2 = %d\n",temp1->marks2);
  printf("Mark 3 = %d\n",temp1->marks3);
  printf("Phone Number = %ld\n",temp1->phoneno);
  avg=(temp1->marks1+temp1->marks2+temp1->marks3)/3;
  printf("Average marks = %f\n",avg);
printf("-----------------------------------------------\n");
  temp1=temp1->next;
  count++;
}
printf("Number of students = %d\n",count);
printf("-----------------------------------------------");

}

void insertatend()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
printf("\nEnter Student Information\n");
printf("\nEnter Student Name : ");
	scanf("%s", newnode->name);
	printf("Enter Student USN : ");
	scanf("%s", newnode->usn);
	printf("Enter marks 1 : ");
	scanf("%d", &newnode->marks1);
	printf("Enter marks 2 : ");
	scanf("%d", &newnode->marks2);
	printf("Enter marks 3 : ");
	scanf("%d", &newnode->marks3);
	printf("Enter Department Name : ");
	scanf("%s", newnode->dept);
	printf("Enter Phone number : ");
	scanf("%ld",&newnode->phoneno);
	newnode->next=0;
	newnode->prev=0;
	tail->next = newnode;
	newnode->prev=tail;
	tail=newnode;
}

void insertatfront()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter Student Information\n");
	printf("\nEnter Student Name : ");
	scanf("%s", newnode->name);
	printf("Enter Student USN : ");
	scanf("%s", newnode->usn);
	printf("Enter marks 1 : ");
	scanf("%d", &newnode->marks1);
	printf("Enter marks 2 : ");
	scanf("%d", &newnode->marks2);
	printf("Enter marks 3 : ");
	scanf("%d", &newnode->marks3);
	printf("Enter Department Name : ");
	scanf("%s", newnode->dept);
	printf("Enter Phone number : ");
	scanf("%ld",&newnode->phoneno);
	newnode->next=0;
	newnode->prev=0;
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
}

void deleteatend()
{
	struct node *temp2;
	if(head==0)
	{
		printf("Empty Linked List\n");
	}
	else if(tail==head)
	{
		head=0;
		free(tail);
	}
	else{
		temp2=tail;
		tail=tail->prev;
		tail->next=0;
		free(temp2);
	}
}

void deleteatfront()
{
	struct node *temp3,*temp4;
	if(head==0)
	{
		printf("Empty Linked List\n");
	}
	else if(tail==head)
	{
		head=0;
		free(tail);
	}
	else
	{
		temp3=head;
		temp4=temp3->next;
		head=temp3->next;
		temp4->prev = 0;
		free(temp4);
	}
}

