#include<iostream>
using namespace std;
void square(int n);
int main ()
{
	int num[5];
	cout<<"entr the integers\n";
	for (int i=0;i<5;i++)
	cin>>num[i];
	cout<<"calling functios\n";
	for (int i=0;i<5;i++)
	square(num[i]);
	
}
void square(int n)
{
	
	cout<<n<<"\t"<<n*n<<endl;
}

