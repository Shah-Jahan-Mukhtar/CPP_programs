#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public :
		A()
		{
			a=10;
		}
	friend	 void show(A,B);
};
class B{
	int b;
	public :
		
	B()
	{
		b=20;
	}
	friend void show(A,B);
};
void show(A x,B y)
{
	int r;
	r=x.a+y.b;
	cout<<"value of a="<<x.a<<endl;
	cout<<"value of b="<<y.b<<endl;
	cout<<"wum of bot="<<r<<endl;
}
	int main ()
{
	A obj1;
	B obj2;
	show(obj1,obj2);
}
