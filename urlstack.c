#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char f[20][80],b[20][80],cp[50];
int topf=-1,topb=-1;
void back();
void forward();
void back();
void ext();
void main()
{
	char ch1[20];
	printf("Welcome to our Web Browser, Start navigating\n");
	do
	{
		int ch;
		printf("Enter your choice among all\n1.Enter the url\n2.Forward\n3.Backward\n4.Display forward pages\n5.Display backward pages\n6.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		{
		printf("Enter the url of the webpage you want to visit\n");
		scanf(" %s",cp);
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
		case 6:
		{
		ext();
		break;
	}
}
 printf("Do you still want to continue (Y/N)\n"); 
 scanf("%c",&ch1);	
}
 while(ch1=='Y');
}
void back()
{
	strcpy(cp,f[++topf]);
	strcpy(b[topb],cp);
	printf("The current webpage is %s\n",b[topb]);
}
void forward()
{
	strcpy(cp,b[topf--]);
	printf("The current webpage is %s\n",cp);
}
void ext()
{
	exit(0);
}