#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
int getCount(struct node * head)
{
    int count = 0;
    while(head)
    {
        head = head -> next;
        count++;
    }
    return count;
}
struct node * yNodeIntersecting(struct node * head1, struct node * head2)
{
	struct node *tmp1;
    int m = getCount(head1);
    int n = getCount(head2);
    struct node * merge_point = NULL;
    int diff = (m > n) ? (m-n) : (n-m);
    if(m<n)
    {
    	tmp1=head1;
    	head1=head2;
    	head2=tmp1;
    	while(diff--)
            head1 = head1 -> next;
    }
    if(m > n)
    {
        while(diff--)
            head1 = head1 -> next;
    }
    else
    {
        while(diff--)
            head2 = head2 -> next;
    }
    while(head1 && head2)
    {
        if(head1 -> next == head2 -> next)
        {
            merge_point = head1 -> next;
            break;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return merge_point;
}
 
struct node * addElement(struct node *head, int number)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = number;
    temp -> next = NULL;
    struct node * temp2 = head;
    while(temp2 -> next != NULL)
        temp2 = temp2 -> next;
    temp2 -> next = temp;
    return head;
}
 
int main(void)
{
	int i,t,n;
    struct node * listHead1 = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number of nodes in list1:-");
    scanf("%d",&n);
    printf("Enter the values:- \n");
    scanf("%d",&t);
    listHead1 ->data = t;
    listHead1 ->next = NULL;
    for(i=0;i<n-1;i++)
    {
    	scanf("%d",&t);
    	listHead1 = addElement(listHead1, t);
	}
    struct node * listHead2 = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter the number of nodes in list2:-");
    scanf("%d",&n);
    printf("Enter the values:- \n");
    scanf("%d",&t);
    listHead2->data = t;
    listHead2->next = NULL;
    for(i=0;i<n-1;i++)
    {
    	scanf("%d",&t);
    	listHead2 = addElement(listHead2, t);
	}
    struct node * temp = listHead2;
	temp = temp-> next;
    temp -> next = listHead1 -> next -> next -> next;
 	struct node * merge_p = yNodeIntersecting(listHead1, listHead2);
    printf("\nMerge node is:- %d\n", merge_p -> data);
 	return 0;
}
