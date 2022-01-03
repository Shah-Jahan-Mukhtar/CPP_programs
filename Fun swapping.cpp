#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main ()
{
	int a,b;
	cout<<"enter the value of first"<<endl;
	cin>>a;
	cout<<"enter the value of second"<<endl;
	cin>>b;
	cout<<"value befor swapping :"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
		swap(a,b);
	cout<<"value after swapping "<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	
	
}
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
	
}
