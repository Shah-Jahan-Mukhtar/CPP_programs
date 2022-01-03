#include<iostream>
using namespace std;
class circle{
	float radius;
	public :
		void get_radius (float r)
		{
			radius=r;
			
		}
		 void area ()
		{
			cout<<"area of circlr:"<<3.14*radius*radius<<endl;
		}
		void circum()
		{
			cout<<"cicumference:"<<2*3.14*radius<<endl;
		}
};
int main ()
{
	circle c;
	float radius;
	cout<<"enter radius\n";
	cin>>radius;
	c.get_radius (radius);
	c.area ();
	c.circum();
}
