#include<iostream>
#include<string.h>
using namespace std;
    int top_r=-1,top_g=-1;
    int truck_id[20];
    int grg[20];
    void enter_garage(int);
    void exit_garage(int);
    void on_road();
    void show_trucks();
	int main()
	{
		int ch,ti,n;
		string c;
		do
		{
			cout<<"Enter your choice 1.Line up the trucks on the road 2.Enter into Garage 3.Exit from garage 4.Show Trucks"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					on_road();
					break;
				case 2:
					cout<<"Enter the number of vehicles you want to enter into the garage"<<endl;
					cin>>n; 
                                        for(int i=1;i<=n;i++)
					enter_garage(truck_id[top_r]);
					break;
				case 3:
					cout<<"Enter the truck id of the vehicle you want ot exit"<<endl;
					cin>>ti;
					exit_garage(ti);
					break;
				case 4:
					show_trucks();
					break;
			 }
			 cout<<"Do you want to continue? (Y/N)"<<endl;
			 cin>>c;
			}
			while(c==("Y"));
		}
	   void on_road()
		{
			int n;
			cout<<"Enter the number of vehicles you want to lineup"<<endl;
			cin>>n;
			cout<<"Enter the truck id of the vehicles you want to lineup"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>truck_id[i];
				top_r++;
			}
		}
		 void enter_garage(int ti)
		{
		 grg[++top_g]=truck_id[top_r];
         truck_id[top_r]=0;
         top_r--;
         }
         void exit_garage(int ti)
         {
		  if(grg[top_g]==ti)
		  {
			  truck_id[++top_r]=grg[top_g];
                          grg[top_g]=0;
			  top_g--; 
		   }
		   else
		   cout<<"Truck "<<ti<<" cannot be moved"<<endl;
		  }
		  void show_trucks()
		  {
			  cout<<"The trucks on road are :"<<endl;
			  for(int i=0;i<=top_r;i++)
			  cout<<truck_id[i]<<endl;
			  cout<<"The trucks inside the garage are: "<<endl;
			  for(int i=0;i<=top_g;i++)
			  cout<<grg[i]<<endl;
			}
            

