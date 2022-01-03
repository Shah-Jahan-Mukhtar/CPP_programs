#include<iostream>
using namespace std;
class yahoo{
	static int n;
	public :
		yahoo()
		{
			n++;
		}
		void show()
		{
			cout<<"u have created "<<n<<" objects so far"<<endl;
		}
};
int yahoo::n=0;
int main ()
{
	yahoo x,y,a,b,c,d,e;
	x.show();
	yahoo z;
	x.show();
	
}
