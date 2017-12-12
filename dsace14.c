#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp,*top2;
int ct=0;
 
int topelement();
void push(int data);
void pop();
void empty();
void display();
void check(int a ,int b);
void stack_count();
void create();
 
int count = 0;
 
void main()
{
    int no, ch, e,p,q;
 
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Dipslay");
    printf("\n 6 - Stack Count");
    printf("\n 7 - Check for pairs");
    printf("\n 8 - Exit");
 
    create();
 
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            display();
            break;
        case 6:
            stack_count();
            break;
        case 7:
            printf("\nEnter the pair elements to be checked secluded by space   :");
            scanf("\n %d %d",&p,&q);
            check(p,q);
            break;
        case 8:
            exit(0);
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
void create()
{
    top = NULL;
}
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}
 
/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
    ct++;
}
void display()
{
        top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
       
    }
 }
/* Pop Operation on stack */
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}
 
/* Return top element */
int topelement()
{
    return(top->info);
}
 
/* Check if stack is empty or not */
void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
void check(int a,int b)
{
    int k=0;
    top2=top;
    if (top2 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top2 != NULL)
    { 
        if(a==(top2->info))
        {
            top2 = top2->ptr;
            if(b==(top2->info))
            {
                if(a==b+1|a==b-1)
                    {
                        printf("\nPair found ,answer:TRUE");
                        break;
                    }
                else
                {
                    printf("\nPair not found ,answer:FALSE");
                   break;
                }
            }       
        }
        else
        {
            top2=top2->ptr ;
            k++;
        }
    }
    if(k+1==ct)
    printf("\nPair not found ,answer:FALSE");
}

