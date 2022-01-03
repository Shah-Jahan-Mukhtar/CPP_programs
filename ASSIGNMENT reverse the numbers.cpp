#include<iostream>
using namespace std;
int main  ()
{
	int a,b,n;
	cout<<"enter the digits:"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"reverse the numbers:"<<n<<b<<a<<endl;
	
}
