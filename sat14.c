#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
 int data;
 struct node *link;
};
struct node *head=NULL;
int main()
{
 struct node *last,*nnode;
 printf("Enter no of elements of the stack\n");
 int n,top=-1;
 scanf("%d",&n);
 printf("Enter elements of the stack\n");
 int st[n];
 for(int i=0;i<n;i++)
 {
  top++;
  scanf("%d",&st[i]);
  }
  for(int i=0;i<n;i++)
  {
   struct node *last,*nnode;
   nnode=(struct node*)malloc(sizeof(struct node));
   nnode->data=st[i];
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
   int ct=0;
   struct node *mid;
   int n1,n2;
   printf("Enter two numbers for pair check\n");
   scanf("%d %d",&n1,&n2);
   for(last=head;last->link!=NULL;last=last->link)
   {
	   mid=last->link;
	   if(((last->data==n1) && ((mid->data)==n2) && (last->data+1)==(mid->data)) || ((last->data==n1) && ((mid->data)==n2) && (last->data)==(mid->data+1))){
	   ct=1;
   }
}
   if(ct==1)
   printf("Pair found\n");
   else
   printf("Pair not found\n");
  return 0;
}
 
