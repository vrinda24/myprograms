#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char b[40][80],cp[50];
int topb=-1,topf=19;
void back();
void forward();
void back();
void ext();
void main()
{
	char ch1;
	int c=1;
	printf("Welcome to our Web Browser, Start navigating\n");
	do
	{
		int ch;
		printf("Enter your choice among all\n1.Enter the url\n2.Backward\n3.Forward\n4.Display forward pages\n5.Display backward pages\n6.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		 {
		case 1:
		{
		if(c>1)
		strcpy(b[++topb],cp);
		printf("Enter the url of the webpage you want to visit\n");
		scanf(" %s",cp);
		c++;
		break;
	}
		case 2:
		{
		 back();
		 break;
	 }
		case 3:
		{
		 forward();
		 break;
        }
        case 4:
        {
			disfwd();
			break;
		}
		case 5:
		{
			disbck();
			break;
		}
		case 6:
		{
		ext();
		break;
	}
}
 printf("Do you still want to continue (Y/N)\n"); 
 scanf(" %c",&ch1);	
}
 while(ch1=='Y');
}
void back()
{
	strcpy(b[++topf],cp);
	strcpy(cp,b[topb--]);
	printf("The current webpage is %s\n",cp);
}
void forward()
{
	strcpy(cp,b[topf--]);
	printf("The current webpage is %s\n",cp);
}
void disfwd()
{
	if(topf!=19)
	{
		for(int i=19;i<=topf;i++)
		printf("%s\n",b[i]);
	}
	else
	printf("Empty forward stack\n");
}
void disbck()
{
	if(topb!=-1)
	{
		for(int i=0;i<=topb;i++)
		printf("%s\n",b[i]);
	}
	else
	printf("Empty back stack\n");
}
void ext()
{
	exit(0);
}
