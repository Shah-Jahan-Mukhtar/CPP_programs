#include<iostream>
using namespace std;
class Number{
	int x,y;
	public :
		Number ()
		{
			x=100;
			y=250;
		}
		void avg()
		{
			cout<<"x:"<<x<<endl;
			cout<<"y:"<<y<<endl;
			cout<<"average:"<<(x+y)/2<<endl;
			
		}
		
};
int main ()
{
	Number n;
	n.avg();
}
