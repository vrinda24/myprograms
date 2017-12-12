#include <stdio.h>
#include <string.h>
int backward[50][50],forward[50][50],top=-1,top1=-1;
void display();
void b1();
void f1();
void forbutton();
void backbutton();
void ext();
void b1(char s[])
{
	if(top==-1)
	printf("So far you haven't browsed through any webpage, Start browsing!\n");
	else
	{
		strcpy(backward[top],s);
	}
}
void f1()
{
	if(top==-1)
	printf("empty stack");
	else
	{
    strcpy(forward[++top1],backward[top--]);
    printf("The current webpage is %s\n",backward[top]);
}
void backbutton()
{
	f1();
}
void forbutton()
{
	if(top1==-1)
	printf("empty stack\n");
	else
	{
		printf("Current webpage is %s\n",forward[top1]);
		top1--;
		for(int i=top1;i>=0;i--)
		strcpy(backward[top++],forward[top1]);
	}
}
void main()
{
	int n;
	char s2[20];
	int ch1;
	printf("how many webpages you wanna browse?\n");
	scanf("%d",&n);
	printf("enter the link of the webpage you wanna browse\n");
	for (int i=0;i<n;i++)
	{
		scanf("%s",s2);
		top++;
		b1(s2);
     }
     display();
     while(ch1 !=3)
         {
		  printf("Enter your choice\n");
          scanf("%d",&ch1);
		  switch(ch1)
		  {
			 case 1:
                forbutton();
                break;
			 case 2:
                backbutton();
                break;
			 case 3:
                ext();
                break;
		     default:
		     printf("Wrong input\n");
		 }
		}
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		printf("%s\n",backward[i]);
     }
 }
 void ext()
 {

     exit(0);
}
