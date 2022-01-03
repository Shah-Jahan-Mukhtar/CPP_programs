#include<iostream>
using namespace std;
int main ()
{
	float x,y,z;
cout<<"enter total marks in metric"<<endl;
cin>>x;
cout<<"enter obtained marks in metric"<<endl;
cin>>y;
z  =y/x*30;
	cout<<"percentege of metric"<<z<<"%"<<endl;
	float a,b,c;
	cout<<"total marks in inter(part1):"<<endl;
	cin>>a;
	cout<<"obtained marks in inter(part1):"<<endl;
	cin>>b;
c=b/a*70;
	cout<<"percentage in inter: "<<c<<"%"<<endl;
	float d;
	d=z+c;
	cout<<"your merit  is :"<<d<<"%"<<endl;
	
	
}
