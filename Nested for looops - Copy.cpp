#include<iostream>
using namespace std;
int main ()
{

	for (int a=0;a<5;a++)
       {
		for (int b=0;b<5-a;b++)
		{
			cout<<"-";
		}
		for (int c=1;c<a*2;c++)
		cout<<"X";
		cout<<endl;	
	}

}
