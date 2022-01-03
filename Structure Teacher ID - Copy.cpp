#include<iostream>
using namespace std;
struct teacher {
	int tid;
	char Tname[50];
	int salary;
	
};
int main ()
{
	teacher t[4];
	int id,i,n=-1;
	char ch;

	for (i=0;i<4;i++)
	{
		cout<<"enter teacher ID:";
		cin>>t[i].tid;
		cout<<"enter teacher name:";
		cin>>t[i].Tname;
		cout<<"enter the salary:";
		cin>>t[i].salary;
	}
		label :
	cout<<"enter teacher id to search:";
		cin>>id;
	for(i=0;i<4;i++)
	if (t[i].tid==id)
	n=i;
	if (n==-1)
	cout<<"Invalid id:";
		else 
	{
		cout<<"the teacher record is as follows:\n";
		cout<<"Teacher id:"<<t[n].tid<<endl;
		cout<<"Teacher name:"<<t[n].Tname<<endl;
		cout<<"salary:"<<t[n].salary<<endl;
		
	}
	cout<<"\n Do another (y/n)?"<<endl;
	cin>>ch;
	if (ch=='y'||ch=='Y')
	goto label;
return 0;
}

