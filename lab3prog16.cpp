#include <iostream>
using namespace std;

int main() {
	int a=0,b=0,c=0;
cout<<"Enter the 3 sides of the triangle";
cin>>a>>b>>c;
if(a==b&&b==c&&a==c)
cout<<"\nThe triangle whose sides were entered is an equilateral triangle";
else if(a==b||b==c||a==c)
cout<<"\nThe triangle whose sides were entered is an isosceles triangle";
else if(a!=b&&b!=c&&a!=c)
cout<<"\nThe triangle whose sides were entered is a scalene triangle";
return 0;
}
