#include<iostream>
using namespace std;
struct time{
;
int  h;
int min;
int sec;
int sec1;
int sec2;

};
struct time;
int main ()
{
	time t1;
	cout<<"enter the  hour:";
	cin>>t1.h;
	cout<<"enter the minutes:";
	cin>>t1.min;
	cout<<"enter the seconds:";
	cin>>t1.sec;
	cout<<t1.h<<":"<<t1.min<<":"<<t1.sec<<endl;
	cout<<"enter the total number of seconds:"<<t1.h*3600+t1.min*60+t1.sec<<endl;
	cout<<"enter the first seconds:";
	cin>>t1.sec1;
	cout<<"enter the 2nd seconds: ";
	cin>>t1.sec2;
	int h,m,s;
	h=t1.sec1/3600;
	m=t1.sec1/60;
	s=t1.sec%60;
	cout<<"hour/minutes/seconds="<<h<<":"<<m<<":"<<s<<endl;
	h=t1.sec2/3600;
	m=t1.sec2/60;
	s= t1.sec2%60;
	cout<<"hour/minutes/seconds"<<h<<":"<<m<<":"<<s<<endl;
	return 0;
	
	
 } 

