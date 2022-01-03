#include<iostream>
using namespace std;
int main ()
{
	int bonus,grade,salary;
	cout<<"enter the basic salary"<<endl;
	cin>>salary;
	cout<<"enter the grade"<<endl;
cin>>grade;
if (grade>15)
bonus=salary*(50/100);
else
bonus=salary*(25/100);
salary=salary+bonus;
cout<<"totals salary is Rs."<<"salary"<<endl;
}
