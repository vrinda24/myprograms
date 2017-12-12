#include <iostream>
#include <string.h>
	string hd[15],cque[8],dvd[10];
    int front=0,rear=-1,top_dvd=0,top_hd=0;
	 int main()
	{
		int ch;
		string c;
		do
		{
			cout<<"Enter your choice :\n 1.Enter the data into the hard disk \n 2.Display contents"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					input();
					break;
				case 2:
					display();
			}
			cout<<"Do you want to continue "<<endl;
			cin>>c;
		}
		while(c=='Y');
	}
     void input()
	 {
		for(int i=0;i<15;i++)
		cin>>hd[i];
	}
