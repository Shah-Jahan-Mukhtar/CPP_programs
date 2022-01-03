#include<iostream>
using namespace std;
int cube(int n);
int main ()
{
	int a,b;
	cout<<"enter the number is"<<endl;
	cin>>a;
	b=5*cube(a);
	cout<<"the number is "<<b<<endl;
	b=5*cube(a); 
		cout<<"the number is "<<b<<endl;
}
int cube(int n)
{
	return n*n*n;
}
