#include<iostream>
#include<string.h>
using namespace std;
    int top_r=-1,rear_g=0,front_g=-1,temp=0,k;
    string truck_name[20];
	string cgrg[20];
    string tempstr[20];
    int count[20];
    void on_road();
    void enter_garage(string);
    void exit_garage(string);
    void show_trucks();
    void priority();
    int main()
	{
		int ch,n;
		string c,ti;              
		do
		{
			cout<<"Enter your choice 1.Line up the trucks on the road 2.Enter into Garage 3.Exit from garage 4.Show Trucks 5.Priority"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					on_road();
					break;
				case 2:
					cout<<"Enter the number of vehicles you want to enter into the garage"<<endl;
					cin>>n;
					temp=n; 
                                        for(k=1;k<=n+1;k++)
					enter_garage(truck_name[top_r]);
					break;
				case 3:
					cout<<"Enter the truck name that you want to exit from the garage"<<endl;
					cin>>ti;
					exit_garage(ti);
					break;
				case 4:
					show_trucks();
					break;
				case 5:
					priority();
					break;
			 }
			 cout<<"Do you want to continue? (Y/N)"<<endl;
			 cin>>c;
			} 
			while(c=="Y");
			return 0;
		}
	     void on_road()
		{
			int n;
			cout<<"Enter the number of vehicles you want to lineup"<<endl;
			cin>>n;
			cout<<"Enter the truck id of the vehicles you want to lineup"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>truck_name[i];
				top_r++;
			}
		}
	    void enter_garage(string ti)
		{
                if(front_g==(rear_g+1)%20)
			cout<<"Garage is full"<<endl;
		else if(front_g==-1)
   			front_g=rear_g=0;
		else	
                        rear_g=(rear_g+1)%20;
			cgrg[rear_g]=ti;
			if(k!=(temp+1))
			{
                        truck_name[top_r]="0";
			top_r--;
                        }
         }
          void exit_garage(string ti)
         {
		  if(cgrg[front_g]==ti)                         
			  truck_name[++top_r]=cgrg[front_g];
		  else if(front_g==rear_g)
		   front_g=rear_g=-1;
		  else if(front_g==-1)
            cout<<"The truck can't be moved as it is not on exit gate"<<endl;
		  else
		     truck_name[++top_r]=cgrg[front_g];
                     front_g=(front_g+1)%20; 
		 }
		  void show_trucks()
		  {
			  cout<<"The trucks on road are :"<<endl;
			  for(int i=0;i<=top_r;i++)
			  cout<<truck_name[i]<<endl;
			  cout<<"The trucks inside the garage are: "<<endl;
			  int i=front_g;
			  while(i!=rear_g)
			  {
			   cout<<cgrg[i]<<endl;
 			   i=(i+1)%20;
			  }
			}
		    void priority()
			{
				cout<<"Enter the no. of days a truck has to be retained in the garage"<<endl;
				int i=front_g,j=0,t;
				string t1; 
				while(i!=rear_g)
				{
					cout<<"No of days "<<cgrg[i]<<" has to be retained"<<endl;
					tempstr[j]=cgrg[i]; 
					cin>>count[j];
					j++;
					i=(i+1)%20;
				}
				for(int x=0;x<j-1;x++) 
				{
				      	for(int y=0;y<(j-x-1);y++) 
					{
						if(count[y]>count[y+1])
						{
							t=count[y];
							count[y]=count[y+1]; 
							count[y+1]=t;
				            		t1=tempstr[y];
				            		tempstr[y]=tempstr[y+1]; 
				            		tempstr[y+1]=t1;
				           }
				         }
				        }  
				cout<<"Order of trucks in the garage according to their priority"<<endl;
				 for(int x=0;x<j;x++)
				 cout<<tempstr[x]<<endl;
			         for(int x=0;x<j;x++)
				 cgrg[x]=tempstr[x];
                          }		


            
