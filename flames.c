#include <stdio.h>
#include <string.h>
struct node
{
	char data;
	struct node *link;
};
struct node *head=NULL;
int main()
{
	int i,j,i1=0;
	char n1[20],n2[20],chk[20]; //two names
	char g[6]={'F','L','A','M','E','S'};
	scanf("%s",n1);
	scanf("%s",n2);
	struct node *last,*nnode;
	for(i=0;i<6;i++)
	{
		nnode=(struct node *)malloc(sizeof(struct node));
		nnode->data=g[i];
		nnode->link=NULL;
		if(head==NULL)
		head=nnode;
		else
		{
			last=head;
			while(last->link!=NULL)
			last=last->link;
			last->link=nnode;
		}
	}
	int l1,l2;
	l1=strlen(n1);
	l2=strlen(n2);
	int c=0,uc;
	for(i=0;i<l1;i++)
	{    
		for(j=0;j<l2;j++)
		{
			if(n1[i]==n2[j])
			{
				c=c+2;
			    chk[i1]=n1[i];
			    i1++;
			}
		}
	}
	uc=(l1+l2)-c;
	printf("uncommon words= %d\n",uc);
	for(last=head;last->link!=NULL;last=last->link)
	last->link=head;
	last=head;
	struct node *mid;
	int counter=0;
	while(last->link!=head)
	{
		mid=last;
		last=last->link;
		counter++;
		if(counter==uc)
		{
			printf("%c\n",last->data);
			mid->link=last->link;
			last=last->link;
			counter=1;
		 }
		}
		printf("%c\n",head->data);
		return 0;
	}
