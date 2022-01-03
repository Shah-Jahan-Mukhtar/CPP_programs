#include<iostream>
using namespace std;
int main ()

{
	float  a,b;
	char x,ch;
	do{
	
	cout<<"enter the number,an operator and another number:\n";
	cin>>a>>x>>b;
	switch (x)
	{
		case '+':
		cout<<a+b<<endl;
		break;
		case '-':
		cout<<a-b<<endl;
		break;
		case '*':
		
		cout<<a*b<<endl;
			break;
		case '/':
		cout<<a/b<<endl;
		break;
				
			
	}
	cout<<"do another (y/n)?"<<endl;
	cin>>ch;
	}while(ch=='y' || ch=='y');
	
}
