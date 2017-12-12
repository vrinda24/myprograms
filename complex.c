
#include <stdio.h>
#include<string.h>
void add(int,int,int,int);
void sub(int,int,int,int);
void mult(int,int,int,int);
int main()
{
  	int a,b,c,d;
  	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    add(a,b,c,d);
    sub(a,b,c,d);
    mult(a,b,c,d);
	return 0;
}
void add(int a,int b,int c,int d)
{
	printf("%d+%di\n",(a+c),(b+d));
}
void sub(int a,int b,int c, int d)
{
	printf("%d+%di\n",(a-c),(b-d));
}
void mult(int a,int b,int c,int d)
{
	printf("%d+%di\n",(a*c-b*d),(a*d+c*b));
}

  
