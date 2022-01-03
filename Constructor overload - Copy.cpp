#include<iostream>
using namespace std;
class over{
	int num;
	char ch;
	public :
		over()
		{
			num=0;
			ch='x';
		}
		over(int n,char c)
		{
			num=n;
			ch=c;
		}
		void show()
		{
			cout<<"Num :"<<num<<endl;
			cout<<"Char :"<<ch<<endl;
		}
};
int main ()
{
	over o1,o2(100,'y');
	cout<<"Showing the 1st data member :"<<endl;
	o1.show();
	cout<<"showing the 2nd data memeer "<<endl;
    o2.show();
}
