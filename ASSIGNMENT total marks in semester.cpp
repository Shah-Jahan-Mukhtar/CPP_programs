#include<iostream>
using namespace std;
int main ()
{
	float a1,a2,a3,a4,q1,q2,q3,q4;
	float total_ass,total_quiz,p_marks,mt_marks,ft_marks,total;
cout<<"enter the marks of assignment 1"<<endl;
cin>>a1;
cout<<"enter the marks of assignment 2"<<endl;
cin>>a2;
cout<<"enter the marks of assignment 3"<<endl;
cin>>a3;
cout<<"enter the marks of assignment 4"<<endl;
cin>>a4;
cout<<"		quiz	 "<<endl;
cout<<"enter the marks of quiz 1"<<endl;
cin>>q1;
cout<<"enter the marks of quiz21"<<endl;
cin>>q2;
cout<<"enter the marks of quiz 3"<<endl;
cin>>q3;
cout<<"enter the marks of quiz 4"<<endl;
cin>>q4;
cout<<"enter the project marks"<<endl;
cin>>p_marks;
cout<<"enter the mid marks "<<endl;
cin>>mt_marks;
cout<<"enter the final term marks"<<endl;
cin>>ft_marks;
total_ass=(a1+a2+a3+a4)/5;
total_quiz=(q1+q2+q3+q4)/10;
total=total_ass+total_quiz+p_marks+mt_marks+ft_marks;
cout<<"the Result is:"<<total;


}
