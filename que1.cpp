#include<iostream>
#include<string.h>
using namespace std;
 int front=0,rear=-1,adult_count=0,child_count=0,age;
 string que[20];
 void enqueue(string);
 void dequeue();
 void display();
     int main()
	{
		int ch;
		string s,p;
		do
		{
			cout<<"Enter your choice"<<endl<<"1.Line Up the members"<<endl<<"2.Process the member"<<endl<<"3.Display the number of adults and children"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"Is it a family or an individual?"<<endl;
					cin>>s;
					enqueue(s);
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				}
				cout<<"Do you want to continue (Y/N)?"<<endl;
				cin>>p;
			}
			while(p=="Y");
			return 0;
	}
    void enqueue(string s)
	{
		int n,priority=0,p1;
		string name;
		if(s=="family")
		{
			cout<<"Enter the number of members in the family"<<endl;
		    cin>>n;
		    if((n+rear)<=19)
		    {
				if(front>rear)
				{
					cout<<"Enter the name and age of the members of the family "<<endl;
					for(int i=1;i<=n;i++)
					{
						cin>>name;
						rear++;
						que[rear]=name;
                        cin>>age;
						if(age>12)
						adult_count++;
						else
						child_count++;
					}
				}
				else
				{
					cout<<"Enter the priority of the family "<<endl;
					cin>>p1;
					if(p1>priority)
					{
						priority=p1;
						int j=rear;
						rear=j+n;
						while(j>=front)
						{
							que[j+n]=que[j];
							j--;
						}
						front=j+1;
						cout<<"Enter the name and age of the members of the family"<<endl;
						for(int i=front;i<=(front+n)-1;i++)
						{
                                                 cin>>que[i];
                                                 cin>>age;
 						 if(age>12)
 						 	adult_count++;
						 else
						 	child_count++;
						}

					}
				}
			}
			else
				cout<<"Cannot accept more members"<<endl;
			}
			if(s=="individual")
			{
				rear++;
				cout<<"Enter the name and age of the individual"<<endl;
				cin>>que[rear];
				cin>>age;
				if(age>12)
					adult_count++;
				else
					child_count++;
				}
			}
			void dequeue()
			{
				if(front>rear)
					cout<<"Empty Queue"<<endl;
				else
					cout<<que[front++]<<" is processed"<<endl;
			}
		     void display()
		     {
				for(int i=front;i<=rear;i++)
				{
				 	
                                 cout<<que[i]<<endl;
                }		
			   cout<<"Number of children="<<child_count<<endl;
			   cout<<"Number of adults="<<adult_count<<endl;
		}
