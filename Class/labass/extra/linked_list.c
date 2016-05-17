/* Consider that you are given a series of numbers. The list of
numbers is terminated by the number -1. Assign these numbers
into a linked list and display them. */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * next;
} node;

node * append_data(node *head, int data)
{
	node * new = (node*) malloc(sizeof(node));
	new->next = head;
	new->data = data;
	return new;
}

void display_list( node *head)
{
	node * cur;
	cur = head;
	while(cur !=NULL)
	{
		printf("%d ",cur->data);
		cur = cur->next;
	}
	return;
}

int main()
{
	node * head=NULL;
	int n;
	scanf("%d",&n);
	while(n!=EOF)
	{
		head = append_data(head, n);
		scanf("%d",&n);
	}
	display_list(head);
	printf("\n");
	return 0;
}
