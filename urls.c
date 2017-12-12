#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
char f[20][80],b[20][80];
int topf=-1;int topb=-1;
void fwd();
void bwd();
void dispfwd();
void dispbwd();
void ext();
int main()
{
	printf("Welcome to our new web browser\n");
	int choice;
	while(choice!=5)
	{
	printf("Enter your choice among all\n1.Forward\n2.Backward\n3.Display backward pages\n4.Display forward pages\n5.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			fwd();
			break;
		case 2:
			bwd();
			break;
		case 3:
			dispbwd();
			break;
		case 4:
			dispfwd();
			break;
		case 5:
			ext();
			break;
	}
}
}

void fwd()
{
	char url[80];
	int i,j,len;
	topb++;
	printf("\nEnter the url of the page you currently want to visit\n");
	scanf("%s",url);
	len=strlen(url);
	for(j=0;j<len;j++)
	b[topb][j]=url[j];
}
void bwd()
{
	char url[80];
	int i,j,len;
	topf++;
	topb--;
	len=strlen(b[topb]);
	for(j=0;j<len;j++)
	f[topf][j]=url[j];
	printf("\nYou are currently on %s\n",b[topb]);


}
void dispbwd()
{
	int j;
	for(j=0;j<topb;j++)
	printf("%s\n",b[j]);
}
void dispfwd()
{
	int j;
	for(j=0;j<topf;j++)
	printf("%s\n",f[j]);
}
void ext()
{
	exit(0);
}
