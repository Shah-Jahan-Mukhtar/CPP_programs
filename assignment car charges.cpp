#include<iostream>
using namespace std;
float calculatethecharge(int car,float h)
{
	float chrg=2.00;
	if (h<=2.0)
	cout<<car<<"\t"<<chrg<<endl;
	else if (h==24.0)
	cout<<car<<"\t"<<h<<"\t"<<10.0<<endl;
	else if (h<=4.0)
	cout<<car<<"t"<<h<<"\t"<<chrg+0.50<<endl;
	else if (h<=5.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+1.00<<endl;
	else if (h<=6.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+1.50<<endl;
	else if (h<=7.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+2.00<<endl;
	else if (h<=8.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+2.50<<endl;
	else if (h<=9.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+3.00<<endl;
	else if (h<=10.00)
	cout<<car<<"\t"<<h<<"\t"<<chrg+3.50<<endl;
	else if (h<=11.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+4.0<<endl;
	else if (h<=12.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+4.5<<endl;
	else if (h<=13.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+5.0<<endl;
	else if (h<=14.0)
	cout<<car<<"\t"<<h<<"\t"<<chrg+5.50<<endl;
	else if (h<=15.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+6.0<<endl;
	else if (h<=16.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+6.5<<endl;
	else if (h<=17.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+7.0<<endl;
else if (h<=18.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+7.5<<endl;
	else if (h<=19.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+8.0<<endl;
	else if (h<=20.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+8.5<<endl;
	else if (h<=21.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+9.0<<endl;
	else if (h<=22.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+9.5<<endl;
	else if (h<=23.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+10.0<<endl;
	else if (h<=24.0)
	
	cout<<car<<"\t"<<h<<"t"<<chrg+10.5<<endl;
	
	
}
int main ()
{
	int c1=1;
	float h1,h2,h3;
	cout<<"enter the hour:"<<endl;
	cin>>h1;
	cout<<"enter the hour:"<<endl;
	cin>>h2;
	cout<<"enter the hour:"<<endl;
	cin>>h3;
	cout<<"\ncar\thours\tcharge"<<endl;
	calculatethecharge(c1++,h1);
    calculatethecharge(c1++,h2);	
    calculatethecharge(c1++,h3);
}
