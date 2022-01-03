#include<iostream>
using namespace std;
int main ()
{
	double years,qd;
	cout<<"enter the year"<<endl;
	cin>>years;
	cout<<"hours ="<<(years*365*24)<<endl;
	cout<<"minutes ="<<(years*365*24*60)<<endl;
	cout<<"seconds ="<<(years*365*24*3600)<<endl;
     double q=50000;
     cout<<"days ="<<(q*365)<<endl;
     cout<<"hours ="<<(q*365*24)<<endl;
     cout<<"seconds ="<<(q*365*24*3600)<<endl;
     qd=q*365*24*3600/years*365*24*3600;
     cout<<qd;
     return 0;
}
