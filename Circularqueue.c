#include<stdio.h>
#define N 5
int front = -1, rear = -1, Q[N], ele;
void Enqueue();
void Dequeue();
void display();
void peek();

void main(){
	int choice;
	printf("\t\t\tCicular Queue Operation\n");
	while(1){
		printf("\n1. Enqueue\t2. Dequeue\t3. Display\t4. Peek\t5. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: Enqueue(); 
				break;
			case 2: Dequeue(); 
				break;
			case 3: display(); 
				break;
			case 4: peek(); 
				break;
			case 5: return;
				break;
		}
	}
}

void Enqueue(){
	printf("Enter the element : ");
	scanf("%d",&ele);
	if(rear == -1 && front == -1){
		front = rear = 0;
		Q[rear] = ele;
	}else if((rear + 1) % N == front)
		printf("Overflow\n");
	else{
		rear = (rear + 1) % N;
		Q[rear] = ele;
	}
}

void Dequeue(){
	if (rear == -1 && front == -1)
		printf("Underflow\n");
	else if(front == rear){
		printf("%d has been deleted", Q[front]);
		front = rear = -1;
	}else{
		printf("%d has been deleted", Q[front]);
		front = (front + 1) % N;
	}
}

void peek(){
	if (rear == -1 && front == -1)
		printf("Empty Queue\n");
	else
		printf("Peak element is %d",Q[front]);
}

void display(){
	int i = front;
	if (rear == -1 && front == -1)
		printf("Empty Queue\n");
	else{
		while(i != rear){
		printf("%d ",Q[i]);
		i = (i + 1) % N;
		}
		printf("%d ",Q[rear]);
	}
}
