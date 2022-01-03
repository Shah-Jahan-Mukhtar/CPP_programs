#include<iostream>
using namespace std;
int main ()
{
	int marks;
	cout<<"enter your marks in test"<<endl;
	cin>>marks;
	if (marks>=90)
	cout<<"you grade is A"<<endl;
	else if (marks>=80)
	cout<<"your grade is B"<<endl;
	else	if (marks>=70)
	cout<<"you grade is C"<<endl;
	else if (marks>=60)
	cout<<"your grade is D"<<endl;
	else 
	cout<<"your grade is F"<<endl;
	return 0;
}

