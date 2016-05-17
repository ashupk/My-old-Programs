/* Code for cyclic deletion */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int id;
	struct Node *next;
} node;


node * insert_node(node *head, int id)
{
	node * new = (node*) malloc( sizeof(node) );
	new->id = id;
	new->next = head;
	return new;
}

void display_list( node *head)
{
	while(head !=NULL)
	{
		printf("%d ",head->id);
		head = head->next;
	}
	return;
}

node *delete_node(node *head, node *dnode)
{
	node *cur=head;
	node *prev = NULL;
	while(cur->id != dnode->id)
	{
		prev=cur;
		cur = cur->next;
	}
	if(prev!=NULL)
		prev->next = cur->next;
	else
		head = head->next;
	printf("deleting node with id %d\n",cur->id);
	free(cur);
	return head;
}

node *get_node(node *head, int id)
{
	node *cur = head;
	int cnt=1;
	while(cnt < id)
	{
		if(cur->next == NULL)
			cur = head;
		else
			cur = cur->next;
		cnt++;
	}
	return cur;
}

int main()
{
	int n, i;
	int del_id;
	int id;
	node *head = NULL;
	node *del_node;
	scanf("%d %d", &n, &del_id);
	i = n;
	while(i>0)
		head = insert_node(head, i--);
	display_list(head);
	while(head!=NULL)
	{
		del_node = get_node(head, del_id);
		head = delete_node(head, del_node);
		if(head!=NULL)
			display_list(head);
	}
	return 0;
}
