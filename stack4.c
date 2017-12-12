#include <stdio.h>
#include <string.h>
#define size 50;
int top=-1;
char s[50];
void push(char);
void pop();
void main()
{
	char ex[50];
	int mm=1,i,c1=0;
	printf("Enter the expression that you want to check\n");
	scanf("%s",ex);
	for(i=0;i<=strlen(ex);i++)
	{
		if(ex[i]=='(' || ex[i]=='{' || ex[i]=='[')
		push(ex[i]);
		else if(ex[i]==')')
		{
			 if(s[top]!='(')
			 {
				 c1++;
				 mm=0;
			 }
			 pop();
	    }
	    else if(ex[i]=='}')
	    {
			if(s[top]!='{')
			{
				c1++;
				mm=0;
			}
			pop();
		}
		else if(ex[i]==']')
		{
			if(s[top]!='[')
			{
				c1++;
				mm=0;
			}
			pop();
		}
		else
		continue;
	}
	if(top==-1 && mm==1)
	printf("Balanced parenthesis and no mismatch occured\n");
	else if(mm==0)
	{
		printf("Mismatch parenthesis\n");
		printf("No of mismatchings= %d\n",c1);
	}
	else
	printf("Imbalanced parenthesis\n");
}
void push(char c)
{
	s[++top]=c;
}
void pop()
{
	top--;
}
