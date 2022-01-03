#include<iostream>
using namespace std;
class Travel{
	int km,hrs;
	public :
		Travel()
		{
			km=hrs=0;
		}
		void get()
		{
			cout<<"Enter the kolometers:"<<endl;
			cin>>km;
			cout<<"enter the hours:"<<endl;
			cin>>hrs;
			
		}
		void show()
		{
			cout<<"you traveled \b  "<<km<<"  kilometrs in "	<<hrs<<"hours \b"<<endl;
	
			
		}
		Travel add(Travel p)
		{
		Travel t;
		t.km=km+p.km;
		t.hrs=hrs+p.hrs;
		cout<<"Total traveling is "<<t.km<<" total kilometers in"<<t.hrs<<" hours"<<endl;
		return t;	
		}
};
int main ()
{
	Travel my,your,r;
	my.get();
	my.show();
	my.add(my);
	your.get();
	your.show();
	r=my.add(your);
cout<<"Total traveling is :"<<endl;
r.show();
	return 0;
}
