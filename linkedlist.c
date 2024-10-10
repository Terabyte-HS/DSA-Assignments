#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void main()
{
	struct node *q,*start=NULL,*tmp;
	int data,n;
	printf("\n Enter the number of nodes :");
	scanf("%d",&n);
	while(n>0)
	{
	printf("\n Enter data for the node :");
	scanf("%d",&data);	
	tmp=(struct node*)malloc(sizeof(struct node));
	if(tmp==NULL)
		printf("\n memory allocation failed");
	tmp->data=data;
	tmp->next=NULL;
	if(start==NULL)
		{
			start=tmp;
		}
	else{
	
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=tmp;
	}
	n--;
	}

	printf("\n Data in linked list\n");
	q=start;
	while(q!=NULL)
	{
		printf(" -> ");
		printf(" %d  ",q->data);
		q=q->next;
	}
}
