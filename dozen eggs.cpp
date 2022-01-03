#include<iostream>
using namespace std;
int main ()
{
	int eggs,dozen,eg;
	cout<<"enter the number of eggs";
	cin>>eggs;
	dozen=eggs/12;
	eg=eggs%12;
	cout<<"eggs in dozen"<<dozen<<endl;
	cout<<"no of remaining eggs"<<eg<<endl;
      if (dozen>=3)
	  cout<<"it is true "<<endl;
	  else 
	  cout<<"it is false"<<endl;
    	return 0;
}
