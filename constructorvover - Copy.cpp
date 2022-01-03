#include<iostream>
using namespace std;
class Over{
	int num;
		char ch;
	public :
		Over()
		{
			num=0;
			ch='x';
		}
		Over(int n,char c)
		{
			num=n;
			ch=c;
		}
		void show()
		{
			cout<<"NUMBER is :"<<num<<endl;
			cout<<"CHARACTER IS:"<<ch<<endl;
		}
		
		
};
int main ()
{
	Over o1,o2(25,'A');
	cout<<"the cotents of o1 is :\n";
	o1.show();
	cout<<"the cotents of o2 is :\n";
	o2.show();
	
}
