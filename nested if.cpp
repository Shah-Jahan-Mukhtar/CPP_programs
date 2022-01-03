#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	if (a>b&&a>c)
	cout<<"a has maximum";
	else if (b>a&&b>c)
	cout<<"b has maximum";
	else
	cout<<"c has maximum";
	return 0;
}
