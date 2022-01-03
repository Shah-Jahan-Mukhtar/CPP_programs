#include<iostream>
using namespace std;
int main  ()
{
	int width,length,area,perimeter;
	cout<<"find the area and perimeter of triangle"<<endl;
	cout<<"inputs the width of triangle"<<endl;
    	cin>>width;
	cout<<"inputs the length of triangle"<<endl;
	cin>>length;
	area=length*width;
	perimeter=2*(width+length);
	cout<<"area of triangle:"<<area<<endl;
	cout<<"perimeter of triangle:"<<perimeter<<endl;
}
