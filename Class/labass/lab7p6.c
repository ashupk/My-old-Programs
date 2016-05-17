#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
	char name[100];
	struct Node *next;
};

typedef struct Node node;

node *cur;
node *prev;
node *head;             // defining the head , current and previous node

void Push(char*);

void Pop(char*);



int main() {
	char *sname, *a;
	head=(node*)malloc(sizeof(node));    //memory is allocated to head
	scanf("%ms",&a);

	if(strcmp(a,"-1")!=0)     //if first element is -1 then print null
    {
        scanf("%ms",&sname);
    }
	else{
		printf("NULL");
		return 0;
	}

	strcpy((head->name),sname);  // give first string
	scanf("%ms",&a);

	while(strcmp(a,"-1")!=0)
	{
	    	scanf("%ms",&sname);
	    	cur=head->next;
	    	prev=head;

	    if(strcmp("PUSH",a)==0) Push(sname);// push
	    else
		{
	        cur=head;
	        Pop(sname);
	    }
	    scanf("%ms",&a);                // give next string
	}
	cur=head;
	if(head!=NULL)
		while(cur!=NULL){
	    	printf("%s\n",cur->name);      // print sweetnames in lexicographical order
	    	cur=cur->next;
		}
	else printf("NULL");
	free(head);
	return 0;
}




void Push(char *sname){
	node *temp=(node*)malloc(sizeof(node));
	strcpy(temp->name,sname);             // take the sweetname if it is smaller then head points to this
	if(strcmp(head->name,sname)>0){
		temp->next=head;
        head=temp;
    }
    else
	{
    	while((cur!=NULL)&&(strcmp(cur->name,sname)<0))
		{
    		prev=cur;
	        cur=cur->next;
	    }
        temp->next=prev->next;
        prev->next=temp;
    }
    return;
}

void Pop(char *sname)
{
    if(strcmp((head->name),sname)==0)  // to pop the head
	{
    	cur=head;
    	head=head->next;
    	if(head!=NULL)
        {
            free(cur);
        }
    }
    else
	{
        while(strcmp((cur->name),sname)!=0)   // searching the node
		{
        	prev=cur;
	        cur=cur->next;
	    }
	    prev->next=cur->next;
        if(head!=NULL)
        {
            free(cur);
        }
    }
}
