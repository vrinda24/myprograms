#include<stdio.h>
#define max 3
int a[max],b[max],c[max],t1=-1,t2=-1,t3=-1,i,n,j;
void display();
void main()
{
n=3;
printf("The total no of disks =%d",n);
for(i=0;i<3;i++)
{
a[i]=3-i;
}
printf("\nThe towers before moving");
display();
t1=2;
for(i=1;i<=7;i++)
{
if(i%3==1)
{
printf("\n step(%d) moving disk from A->C",i);
c[++t3]=a[t1];
a[t1--]=0;
display();}
else if(i%3==2)
{
if(i==5)
{
printf("\n step(%d) moving disk from B->A",i);
a[++t1]=b[t2];
b[t2--]=0;
display();}
else
{
printf("\n step(%d) moving disk from A->B",i);
b[++t2]=a[t1];
a[t1--]=0;
display();}
}
else if(i%3==0)
{
if(i==3)
{
printf("\n step(%d) moving disk from C->B",i);
b[++t2]=c[t3];
c[t3--]=0;
display();}
else
{
printf("\n step(%d) moving disk from B->C",i);
c[++t3]=b[t2];
b[t2--]=0;
display();}
}
}
}
void display()
{
printf("\n      A      B      C      ");
for(j=2;j>=0;j--)
{
printf("\n      %d      %d      %d      ",a[j],b[j],c[j]);
}
}

