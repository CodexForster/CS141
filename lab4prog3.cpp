#include <iostream>
using namespace std;

void func_max(int a,int b)
{if(a>b)
{cout<<"\nThe max number is "<<a;
cout<<"\nThe min number is "<<b;
}else
{cout<<"\nThe max number is "<<b;
cout<<"\nThe min number is "<<a;
}}

int main() {
float a=0,b=0;
cout<<"Enter 2 numbers";
cin>>a>>b;
func_max(a,b);	
return 0;
}
