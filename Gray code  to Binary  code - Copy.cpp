#include<iostream>
using namespace std;
int main ()
{
	long n,a,b,c;
	cout<<"enter the starting point ";
	cin>>n;
	cout<<"enter the ending point ";
	cin>>c;
	cout<<"number:Binary--->Gray code"<<endl;
	for (int j;j<=c;j++)
	{
		a=j;
		b=0;
		for (int i=1;i<=i;i++)
		{
			a=a/2;
			b++;
			if (a==1||a==0)
			
			{
				b++;
				break;
				
			}
			
		}
		int v[b];
		a=j;
		for (int i=(b-1);i>=0;i--)
		{
			v[i]=a%2;
			a=a/2;
			if (a==1||a==0)
			{
				v[i-1]=a;
				
			}
			
		}
		cout<<""<<j<<":";
		for (int i=0;i<b;i++)
		{
			cout<<v[i]<<"";
			
		}
		int l[b];
		l[0]=v[0];
		for (int i=1;i<b;i++)
		{
			l[i]=v[i-1]+v[i];
			if (l[i]==2)
			{
				l[i]=0;
			}
		}
		cout<<"---->";
		for (int i=0;i<b;i++)
		{
			cout<<l[i]<<"";		}
			cout<<endl;
	}


return 0;
}
