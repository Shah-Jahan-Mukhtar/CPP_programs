#include<iostream>
#include<string>
using namespace std;
class student
{
	int rolno;
	char name[4];
	int marks;
long long mobile_no;
	char adress[4];
public :
	void input()
{

	cout<<"name:"<<endl;
	gets(name);
	cout<<"Roll no:"<<endl;
	cin>>rolno;
	cout<<"marks:"<<endl;
	cin>>marks;
	cout<<"Mobile NO:"<<endl;
	cin>>mobile_no;
	cout<<"Adress:"<<endl;
	gets(adress);	
}
void show()
{
	cout<<"NAME:"<<name<<endl;
	cout<<"roll no is:"<<rolno<<endl;
	cout<<"marks:"	<<marks<<endl;
	cout<<"mobile no is :"<<mobile_no<<endl;
	cout<<"adress is :"<<adress<<endl;
}



int main ()
{


	student s1,s2,s3,s4;
	int rolno;
	cout<<"enter data of student 1:";
s1.input();
cout<<"enter the data :2";
	s2.input();
		cout<<"enter the data :3";
s3.input();
cout<<"enter the data 4:"<<endl;
s4.input();	
cout<<"enter the roll no:"<<endl;
cin>>rolno;
switch (rolno)
{
	case 1:
	s1.show();
	break;
	case 2:
	s2.show();
	break;
	case 3:
	s3.show();
	break;
	case 4:
	s4.show();
	break;	
}

	
				
}

};




