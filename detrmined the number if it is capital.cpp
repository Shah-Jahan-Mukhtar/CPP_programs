#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character">>endl;
	cin>>ch;
	if (ch>='A')&&(ch<='Z')
	cout<<"it is capital letter"<<endl;
	else if (ch>='a')&&(ch<='z')
	cout<<"it is small letters"<<endl;
	else if (ch>='0')&&(ch<='9')
	cout<<"it is digits"<<endl;
	else 
	cout<<"it is symbol"<<endl;
	return 0;

}
