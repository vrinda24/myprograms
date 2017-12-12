#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
bool findList(Node* first, Node* second)
{
    Node* ptr1 = first, *ptr2 = second;
    if (first == NULL && second == NULL)
        return true;
    if ( first == NULL ||
        (first != NULL && second == NULL))
        return false;
    while (second != NULL)
    {
        ptr2 = second;
        while (ptr1 != NULL)
        {
            if (ptr2 == NULL)
                return false;
            else if (ptr1->data == ptr2->data)
            {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else break;
        }
        if (ptr1 == NULL)
            return true;
        ptr1 = first;
        second = second->next;
    }
 
    return false;
}
void printList(Node* node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
Node *newNode(int key)
{
    Node *temp = new Node;
    temp-> data= key;
    temp->next = NULL;
    return temp;
}
int main()
{
    int n,n1;
    cout<<"No of elements in the first list"<<endl;
    cin>>n;
    int ar[n],br[n1];
    cout<<"Enter elements of the list"<<endl;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    Node *a = newNode(ar[0]);
    for(int i=1;i<n;i++)
    {
	 a->next = newNode(ar[i]);
     a=a->next;
 }
    cout<<"Enter no of elements of the second list"<<endl;
    cin>>n1;
    cout<<"Enter elements of the second list"<<endl;
    for(int i=0;i<n1;i++)
    cin>>br[i];
    Node *b = newNode(br[0]);
    for(int i=1;i<n1;i++)
    {
     b->next = newNode(br[i]);
     b=b->next;
 }
 
    if(findList(a,b))
         cout << "LIST FOUND"<<endl;
     else
         cout << "LIST NOT FOUND"<<endl;
 
    return 0;
}
