#include<iostream>
using namespace std;
class Book{
	int pages,price;
	char title[50];
	public :
		void get()
		{
				cout<<"Book title:"<<endl;
			gets(title);
			cout<<"Book pages is:"<<endl;
			cin>>pages;
			cout<<"Book price is :"<<endl;
			cin>>price;
		
		}
		void show()
		{
			cout<<"Book pages is :"<<pages<<endl;
			cout<<"Book price is :"<<price<<endl;
			cout<<"Book title is :"<<title<<endl;
		}
};
int  main()
{
	Book B1;
	B1.get();
    Book B2(B1);
	Book B3=B1;
	cout<<"1st book detail:"<<endl;
	B1.show();
	cout<<"2nd book detail:"<<endl;
	B2.show();
	cout<<"3rd  book detail:"<<endl;
    B3.show();
	 
}
