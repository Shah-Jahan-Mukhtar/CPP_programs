#include <iostream>
#include <string>
using namespace std;
void bitString(int x,string prefix){
if (x == 0)
cout << prefix <<endl;
for (int i = 0;i<x;++i){
bitString(x-1,(prefix+"0"));
bitString(x-1,(prefix+"1"));
} }
int main (){
int n;
cout<<"Enter the range :";

cin >> n;

bitString(n,"");

system ("pause");
return 0;
}



