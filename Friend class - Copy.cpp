#include<iostream>
using namespace std;
class A{
	int a,b;
	public :
		A()
		{
			a=20;
			b=30;
		}
		friend class B;
};
class B{
	public :
	void showA( A obj)
	{
		cout<<"class A is ="<<obj.a<<endl;
	
	}
	void showB( A obj)
	{
			cout<<"class B is ="<<obj.b<<endl;
	}
	
};

int main ()
{
	A x;
	B y;
	y.showA(x);
	y.showB(x);
	
}
