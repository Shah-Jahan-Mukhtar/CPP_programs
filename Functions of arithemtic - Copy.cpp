#include<iostream>
using namespace std;
void sum(int x,int y);
void div(int x,int y);
void multi(int x,int y);
void subt(int x,int y);
int main ()
{
int a,b;
cout<<"ener the first value\n";
cin>>a;
cout<<"enter the second value\n";
cin>>b;
div(a,b);
subt(a,b);
}
void sum(int x,int y)
{
	int s;
	s=x+y;
	cout<<"x+y :"<<s<<endl;
}
void div(int x,int y)
{
	int division;
	division=x/y;
	cout<<"x/y :"<<division<<endl;
	
}
void multi(int x,int y)
{
	int m;
	m=x*y;
	cout<<"x*y :"<<m<<endl;
}
void subt(int x,int y)
{
	int sub;
	sub=x-y;
	cout<<"x-y :"<<sub<<endl;
}
