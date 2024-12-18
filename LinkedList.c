#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void delete();
struct node {
	int data;
	struct node *next;
};
struct node *head = 0, *temp, *temp1, *newnode;
void main(){
	int ch;
	while(1){
		printf("\nEnter your choice:\n1. CreateNode\t2. Display\t3. Exit:");
		scanf("%d", &ch);
		switch(ch){
			case 1: create();
				break;
			case 2: display();
				break;

			case 3: return;
		}
	}
}

void create(){
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter element:");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	if(head == 0)
		temp = head = newnode;
	else{
		temp->next = newnode;
		temp = newnode;
	}
}

void display(){
	temp1 = head;
	while(temp1 != 0){
		printf("%d ", temp1->data);
		temp1 = temp1->next;
	}
}
