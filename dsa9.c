#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
 int data,marks;
 struct node *next;
 char name[15];
};
struct node *headA=NULL;
struct node *headB=NULL;
node *MergeLists(node **A,node **B);
int main()
{
 int n,n1;
 printf("Enter the no of elements in list A\n");
 scanf("%d",&n);
 struct node *lastA,*nnode;
 for(int i=1;i<=n;i++)
 {
  nnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&nnode->data);
  scanf("%d",&nnode->marks);
    scanf("%s",nnode->name);
  nnode->next=NULL;
  if(headA==NULL)
   headA=nnode;
  else
   {
    lastA=headA;
    while(lastA->next!=NULL)
     lastA=lastA->next;
    lastA->next=nnode;
   }
  }
 printf("Enter the number of elements in list B\n");
 scanf("%d",&n1);
 struct node *lastB,*nnode;
 for(int i=1;i<=n1;i++)
 {
  nnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&nnode->data);
  scanf("%d",&nnode->marks);
  scanf("%s",nnode->name);
  nnode->next=NULL;
  if(headB==NULL)
   headB=nnode;
  else
   {
    lastB=headB;
    while(lastB->next!=NULL)
     lastB=lastB->next;
    lastB->next=nnode;
   }
  }
  struct node *a;
  a=MergeLists(*headA,*headB); 
  return 0;
 }
node *MergeLists(node **headA, node **headB)
{
    	if(!headA || !headB){
		if (!headA)
			return headB;
		else
			return headA;
	}
	else{
		node *headC = NULL, *temp = NULL;
		if (headA->data > headB->data){
			headC = headB;
			headB = headB->next;
			if (!headB){
				headC->next = headA;
				return headC;
			}
				
		}
		else{
			headC = headA;
			headA = headA->next;
			if (!headA){
				headC->next = headB;
				return headC;
			}
				
		}
			
		
		temp = headC;

		while (headA && headB){
			if (headA->data > headB->data){
				headC->next = headB;
				headB = headB->next;
				if (!headB){
					headC = headC->next;
					headC->next = headA;
					return temp;
				}
			}
			else{
				headC->next = headA;
				headA = headA->next;
				if (!headA){
					headC = headC->next;
					headC->next = headB;
					return temp;
				}
			}
			headC = headC->next;
		}
		return temp;
	}
	struct node *lastC=headC;
	while(lastC->next!=NULL)
	{
		printf("%s\n",;lastC->name);
		printf("%d\n",lastC->data);
		printf("%d\n",lastC->marks);
		lastC=lastC->next;
	}
}

		
