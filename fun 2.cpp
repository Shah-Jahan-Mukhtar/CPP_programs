#include<iostream>
using namespace std;
void max(int A,int B);
int main ()
{
	int a,b;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	max(a,b);
	max(a,b);
	
}
void max(int A,int B)
{
	if (A>B)
	cout<<"maximum number is:"<<A<<endl;
	else 
	cout<<"maximum number is :"<<B<<endl;
	
}
