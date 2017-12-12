#include <iostream>
using namespace std;
int main()
{
	double salary,tax;
	cin>>salary;
	if(salary<=20000)
	tax=(10*salary)/100;
	else if(salary>20000 && salary<=50000)
	tax=(20*salary)/100;
	else
	tax=(30*salary)/100;
	cout<<tax<<endl;
}
