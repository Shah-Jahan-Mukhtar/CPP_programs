#include<iostream>
using namespace std;
int even(int arr[]);
int main ()
{
	int arr[5],n;
	cout<<"enter thr value \n";
	for (int i=0;i<5;i++)
	cin>>arr[i];
	n=even(arr);
	cout<<"array has ....even numbers :"<<n<<endl;
	
}
int even(int arr[])
{
	int e,j;
	e=0;
	for (j=0;j<5;j++)
	if (arr[j]%2==0)
	e++;
	return e;
}
