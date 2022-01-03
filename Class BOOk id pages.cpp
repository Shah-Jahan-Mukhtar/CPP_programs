#include<iostream>
using namespace std;
class Book {
	private :
		int bookID,pages;
		float price;
		public :
			void get ()
			{
				cout<<"enter the book ID :"<<endl;
				cin>>bookID;
				cout<<"enter the book pages:\n";
				cin>>pages;
				cout<<"enter the boook price:\n";
				cin>>price;
			}
			void show ()
			{
				cout<<"BookID:"<<bookID<<endl;
				cout<<"pages:"<<pages<<endl;
				cout<<"price:"<<price<<endl;
			}
			void set (int id,int pg,float pr)
			{
				bookID=id;
				pages=pg;
				price=pr;
			}
			float  getprice ()
			{
				return price;
			}
			
		
};
int main ()
{
	Book b1,b2;
	b1.get();
	b2.set(3,800,400.50);
	cout<<"the price of most costly book is : "<<endl;
	if (b1.getprice()>b2.getprice() )
	b1.show();
	else 
	b2.show();
}
