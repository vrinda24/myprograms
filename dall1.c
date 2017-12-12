#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
int main()
{
	int n;
	struct node *last,*nnode,*mid;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
	{
		nnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&nnode->data);
		nnode->link=NULL;
		if(head==NULL)
		{
			head=nnode;
		}
		else
		{
			last=head;
			while(last->link!=NULL){
				last=last->link;
			}
			last->link=nnode;
			last=last->link;
			 
			}
		}
	int x;
	printf("Enter the value of x\n");
	scanf("%d",&x);	
	for(last=head;last->link!=NULL;last=last->link)
	{
		for(mid=head;mid!=NULL;mid=mid->link)
		{
			if((mid->data+last->data)==x)
			{
				printf("(%d,%d)\n",mid->data,last->data);
				break;
			}
		}
	}
	return 0;
}
	
