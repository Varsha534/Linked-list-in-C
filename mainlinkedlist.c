#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
	struct node*next; 
};

struct node *start;

int main()
{
	struct node*newnode1 =(struct node*)malloc(sizeof(struct node));
	struct node*newnode2 = (struct node*)malloc(sizeof(struct node));
	start = newnode1;
	newnode1 -> data = 7;
	newnode1 -> next = newnode2;
	newnode2 -> data = 13;
	newnode2 -> next = NULL;
//	printf("Data = %d, Self address = %d, Next address = %d \n" , newnode1 -> data , newnode1, newnode1 -> next);
//	printf("Data = %d, Self address = %d, Next address = %d \n", newnode2 -> data, newnode2, newnode2 -> next);
	display();
	return 0;
}

void display()
{
	struct node *temp;
	temp = start;
	while (temp != NULL)
	{
		printf("Data = %d, Self address = %d, Next address = %d \n", temp -> next);
		temp = temp -> next;
	}
}
