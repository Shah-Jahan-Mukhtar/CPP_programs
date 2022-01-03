#include<iostream>
using namespace std;
class Marks{
	private :
		int a,b,c;
		public :
			void in ()
			{
				cout<<"enter the value\n";
				cin>>a>>b>>c;
				
			}
			int sum ()
			{
				return a+b+c;
			}
			float out ()
			{
				return (a+b+c)/3.0;
			}
			
};
int main ()
{
	Marks m;
	int s;
	float a;
	m.in ();
	s=m.sum ();
	a=m.out ();
	cout<<"the sum is :"<<s<<endl;
	cout<<"the avarege is :"<<a<<endl;
}
