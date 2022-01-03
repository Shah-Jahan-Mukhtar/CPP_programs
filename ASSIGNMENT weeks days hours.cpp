#include<iostream>
using namespace std;
int main  ()
{
	int hours,weeks,days;
	cout<<"enter the number of hours"<<endl;
	cin>>hours;
	weeks=hours/168;
	hours=hours%168;
	days=hours/24;
	hours=hours%24;
	cout<<"no of weeks:"<<weeks<<endl;
	cout<<"no of days:"<<days<<endl;
	cout<<"no of hours:"<<hours<<endl;
	
}
