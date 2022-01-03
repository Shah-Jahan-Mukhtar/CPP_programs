#include<iostream>
using namespace std;
class Employee{
	string name;
int employeeCode;
	string dateOfJoining;
	public :
		Employee()
		{
			cout<<"enetrr the name:"<<endl;
			cin>>name;
			cout<<"enter the code:"<<endl;
			cin>>employeeCode;
			cout<<"enter the date of joinng:"<<endl;
			cin>>dateOfJoining;
		}
		Employee(string naMe,int employeecodE,string dateofjoining)
		{
			name=naMe;
			employeeCode=employeecodE;
			dateOfJoining=dateofjoining;
			
			
		}
		
			
		
		void set(string Name,int Employeecode,string date)
		{
			name=Name;
			employeeCode=Employeecode;
			dateOfJoining=date;	
		}
		void show()
		{
			
			cout<<" the Emoloyee name:"<<name<<endl;
			cout<<" the employee code:"<<employeeCode<<endl;
			cout<<" the employee Date of joining:"<<dateOfJoining<<endl;
			
		}
};
int main ()
{
	Employee emp1,emp2("saad",21,"20-2-2020"),emp3;
	emp1.show();
	emp2.show();
	emp3.set("sulo",22,"30-3-2020");
	emp3.show();
}

