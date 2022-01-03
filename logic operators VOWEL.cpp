#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter any character"<<endl;
cin>>ch;
if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
cout<<"you entered a vowel"<<ch;
else 
cout<<"you did not entered the vowel"<<ch;
return 0;
}
