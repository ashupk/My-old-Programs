#include<stdio.h>

struct node
{
    int data;
    struct node*next;
};

void display_list(struct node*next)
{
    struct node*cur=head;
    while(cur!=NULL)
    {
        printf("%d",cur->data);
        cur=cur->next;
    }
    printf("\n");
}
