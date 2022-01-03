#include<iostream>
using namespace std;
int main ()
{
	
int math,english,programming,ICT,basic,s;
int avg;
	cout<<"enter the marks of math"<<endl;
	cin>>math;
	cout<<"enter the marks of english"<<endl;
	cin>>english;
	cout<<"enter the marks of programming"<<endl;
	cin>>programming;
    cout<<"enter the marks of ICT"<<endl;
    cin>>ICT;
   cout<<"enter the marks of basic"<<endl;
   cin>>basic;
	s=math+english+programming+ICT+basic;
	avg=s/5;
	cout<<"sum ="<<s<<endl;
	cout<<"average="<<avg<<endl;
	if (avg>63)
	
		cout<<"u have passed"<<endl;


		else 
	cout<<"u have fail"<<endl;

	return 0;
}
