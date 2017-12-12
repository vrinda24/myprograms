#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char st[20][10];
int top=-1;
void display();
void pop();
void search();
void  main()
{
	int n;
	printf("Enter no of students:\n");
	scanf("%d",&n);
	printf("Enter registration number of students:\n");
	for(int i=0;i<n;i++)
	{
		top++;
		scanf("%s",st[i]);
		if(top>-1)
		{
			for(int j=0;j<top-1;j++)
			{
				if(strcmp(st[i],st[j])==0)
				{
				printf("Duplication not allowed");
				top--;
				i--;
			}
		}
	}
 }
pop();
display();
 char s1[10];
 printf("Enter the registration number you want to search\n");
 scanf("%s",s1);
 search(s1);
}

void display()
{
	printf("Registration number of first 10 students:\n");
	for(int i=0;i<=top;i++)
	printf("%s\n",st[i]);
}
void search(char s[])
{
	int c=0;
	for(int i=0;i<top;i++)
	{
		if(strcmp(st[i],s)==0)
		c++;
  }
  if(c==0)
  printf("Not submitted the assignment\n");
  else
  printf("Assignment submitted\n");
 }
void pop()
{
	if(top==-1)
	printf("Stack Empty\n");
	else
	{
		while(top!=9)
		{
		 printf("Popped out element =%s\n",st[top]);
		 top--;
	 }
	}
}
	
