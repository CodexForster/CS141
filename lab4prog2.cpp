#include <iostream>
using namespace std;
void func_dia(float a )
{cout<<"\nThe diameter is "<<2*a;}

void func_area(float a)
{cout<<"\nThe area is "<<3.14*a*a;}

void func_circum(float a)
{cout<<"\nThe circumference is "<<2*3.14*a;}

int main() {
float a=0;
cout<<"Enter the radius";
cin>>a;
func_dia(a);
func_area(a);
func_circum(a);
	return 0;
}
