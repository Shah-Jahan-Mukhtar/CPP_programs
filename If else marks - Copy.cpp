#include<iostream>
using namespace std;
int main ()
{
	int marks;
	cout<<"enter the marks:\n";
	cin>>marks;
	if (marks>=85)
	cout<<"your grade is A+\n";
	else  if (marks>=80)
	cout<<"your grade is A"<<endl;
		else if (marks>=75)
	cout<<"your grade is B+"<<endl;
		else if (marks>=70)
	cout<<"your grade is B"<<endl;
		else if (marks>=65)
	cout<<"your grade is B- \n ";
	else if (marks>=60)
	cout<<"your grade is C+"<<endl;
    else if (marks>=55) 
	cout<<"your grade is C"<<endl;
	else 
	cout<<"you are fail ";
	return 0;
}
