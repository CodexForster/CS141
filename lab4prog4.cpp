#include <iostream>
using namespace std;

void func_odd_even(int a)
{if(a%2==0)
cout<<"\nThe number is even";
else
cout<<"\nThe number is odd";
	
}

int main() {
float a=0;
cout<<"Enter a number";
cin>>a;
func_odd_even(a);	
return 0;
}
