#include<iostream>
using namespace std;
class Result {
	int rolno,marks[6];
	char name[50];
	public :
		void input()
		{
			cout<<"enter the roll no :\n";
			cin>>rolno;
			cout<<"enter the name:\n";
			cin>>name;
			for (int i;i<6;i++){
				cout<<"enter the markks["<<i<<	"]:"<<endl;
				cin>>marks[i];
				
				
			}
		}
			void show ()
			{
				cout<<"Roll no:"<<rolno<<endl;
				cout<<"Name:"<<name<<endl;
				for (int i=0;i<3;i++)
				cout<<"Marks:"<<marks[i];
			}
			int total()
			{
				int t;
				for (int i=0;i<6;i++)
				t=t+marks[i];
				return t;
			}
			int avg()
			{
				int t=0;
				for (int i=0;i<6;i++)
				t=t+marks[i];
				return t/6.0;
			
			
		}
};
int main ()
{
	Result r;
	r.input();
	r.show();
	cout<<"\n total marks"<<r.total()<<endl;
	cout<<"\n average marks"<<r.avg()<<endl;
	
}+
