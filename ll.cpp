#include <stdio.h>
struct Node
{
    int data;
    struct Node *flink, *blink;
};
void pairSum(struct Node *head, int x)
{
    struct Node *first = head;
    struct Node *second = head;
    while (second->flink != NULL)
         second = second->flink;
    bool found = false;
    while (first != NULL && second != NULL && first != second && second->next != first)
    {
         if ((first->data + second->data) == x)
         {
              found = true;
              printf("(%d,%d)",first->data,second->data);
              first = first->flink;
              second = second->blink;
          }
          else
          {
              if ((first->data + second->data) < x)
                 first = first->flink;
              else
                 second = second->blink;
          }
      }
      if (found == false)
             printf("No pair found\n");
}
 
void insert(struct Node **head, int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->flink = temp->blink = NULL;
    if (!(*head))
    (*head) = temp;
    else
    {
        temp->flink = *head;
        (*head)->blink = temp;
        (*head) = temp;
    }
}
int main()
{
    struct Node *head = NULL;
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    scanf("%d",&x);
    pairSum(head, x);
    return 0;
}
