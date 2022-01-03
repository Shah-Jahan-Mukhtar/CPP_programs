#include<iostream>
using namespace std;
class Array {
	int arr[5];
	public :
		void fill();
		void display();
		int max();
		int min();
};
void Array:: fill()
{
	
	for (int i=0;i<5;i++)
	{
	
	cout<<"enter the values["<<i<<"]\n";
	cin>>arr[i];
}
}
void Array:: display()
{
	for (int i=0;i<5;i++)
	cout<<"values are:"<<arr[i]<<endl;
	
}
int Array:: max()
{
	int m=arr[0];
	for (int i=0;i<5;i++)
	if (m<arr[i])
	m=arr[i];
	return m;
}
int Array:: min()
{
	int m=arr[0];
	for (int i=0;i<5;i++)
	if (m>arr[i])
	m=arr[i];
	return m;
}
int main ()
{
	Array ar;
	ar.fill();
	ar.display();
	cout<<"the maximum number is:"<<ar.max()<<endl;
	cout<<"the minimum number is:"<<ar.min()<<endl;
	
}
