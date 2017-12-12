#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#define m 10
using namespace std;
struct q
{
    char str[100];
}a[3],b[10],c[10];
int r=-1,f=-1;
void enqueue(char d[10])
{
    int i=0;
   if((f==0&&r==m-1)||(f-r==1))
   {
       cout<<"Buffer full"<<endl<<"Now burning to DVD...."<<endl;
       for(i=0;i<3;i++)
       {
           strcpy(a[i].str,c[i].str);
       }
   }
   else if(f==-1)
   {
       f++;
       r++;
       strcpy(a[r].str,d);
    }
    else if(r==m-1)
    {
        r=0;
        strcpy(a[r].str,d);
    }
    else
    {
        r++;strcpy(a[r].str,d);
    }
cout<<"Front of buffer is at :"<<f<<endl<<"Rear of buffer is at :"<<r<<endl;

}
void dequeue()
{
    if(f==-1&&r==-1)
        cout<<"Buffer Empty"<<endl;
    else if(f==m-1)
    {
        cout<<a[f].str<<endl;
        f=0;
    }
    else if(r==f)
    {
        cout<<a[f].str<<endl;
        f=-1;r=-1;
    }
    else{
        cout<<a[f].str<<endl;
        f++;
    }
cout<<"Front of buffer is at :"<<f<<endl<<"Rear of buffer is at :"<<r<<endl;

}
void display()
{
    int i;
    if(f<=r)
    {
        for(i=f;i<=r;i++)
            cout<<a[i].str<<endl;
    }
    else{
        for(i=f;i<m;i++)
            cout<<a[i].str<<"\t";
        for(i=0;i<=r;i++)
            cout<<a[i].str<<"\t";
    }
}
void display_new()
{
    cout<<a[r].str;
}
int main()
{
    cout<<"Welcome to DVD burning buffer"<<endl;
    int choice,j=0,k=0,i=0;
    char c[10],l='\0';
    string d;
    do
    {
        cout<<endl<<"Enter your choices among the following:\n1.To write data\n2.To burn from the buffer\n3.Display the data that has not been burnt\n4.Display the newest data sent to buffer\n5.Exit\n"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
                cout<<"Enter data to write to buffer"<<endl;
                cin>>d;
                while(d[i]!='\0')
                    {
                        if((j%10!=0||j==0))
                        {
                        c[j]=d[i];
                        j++;i++;
                        if(d[i]=='\0')
                            c[j]='\0';
                        }
                        else
                        {
                            c[j]='\0';
                            strcpy(b[k].str,c);
                            k++;j=0;

                        }
                    }
                    strcpy(b[k].str,c);
                    k++;
            for(i=0;i<k;i++)
            {
                enqueue(b[i].str);
            }

            break;
        case 2:
            dequeue();
            dequeue();dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            display_new();
            break;
        case 5:
            exit(0);
        }
    }
    while(choice!=5);
}

