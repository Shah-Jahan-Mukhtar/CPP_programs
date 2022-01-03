#include<iostream>
using namespace std;
class Student{
	int marks;
	char grade;
	public :
	Student (int m,char g)
	{
	marks=m;
	grade=g;
		
	}
	void show()
	{
		cout<<"Marks IS:"<<marks<<endl;
		cout<<"Grade IS:"<<grade<<endl;
	}
};
int main()
{
	Student s1(500,'A'),s2(600,'B');
	cout<<"Show the fst data members:"<<endl;
	s1.show();
	
	cout<<"Show thw second data member:"<<endl;
	s2.show();
}
