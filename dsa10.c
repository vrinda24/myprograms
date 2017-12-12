#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	char data[20];
	struct node *next,*prev;
};
struct node *head=NULL;
int main()
{
	int n;
	int c=0;
	struct node *mid,*last,*nnode;
	printf("Enter number of students\n");
	scanf("%d",&n);
	printf("Enter registration number of students\n");
	for(int i=0;i<n;i++)
	{
		nnode=(struct node *)malloc(sizeof(struct node));
		scanf("%s",nnode->data);
		nnode->next=NULL;
		if(head==NULL)
		{
			head=nnode;
			head->prev=NULL;
		}
		else
		{
			last=head;
			while(last->next!=NULL){
				mid=last;
				last=last->next;
				last->prev=mid;
			}
			mid = last;
			last->next=nnode;
			last=last->next;

			last->prev=mid;
			 
			}
		}
		char search[20];
		for(last = head; last->next!=NULL;last=last->next);
		last->next = head;
		head->prev = last;
		printf("Enter the student record to be serched\n");
		scanf("%s",search);
		if(strcmp(search,head->data)==0)
		{
			printf("The predecessor of searched node is: %s\n",head->prev->data);
			printf("The successor of searched node is %s\n",head->next->data);
			c = 1;
		}
		else
		{
		for(last=head->next;last!=head;last=last->next)
		{
			if(strcmp(last->data,search)==0)
			{
				printf("The predecessor of searched node is %s\n",last->prev->data);
				printf("The successor of searched node is %s\n",last->next->data);
				c=1;
			}
		}}
		if(c==0)
			printf("Search unsucessfull\n");
		printf("The last node points to %s\n",last->data);
		printf("The first node points to %s\n",head->prev->data);
		return 0;
	}
