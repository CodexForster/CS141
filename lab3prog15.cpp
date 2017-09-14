#include <iostream>
using namespace std;

int main() {
	int a=0,b=0,c=0;
cout<<"Enter the 3 sides of the triangle";
cin>>a>>b>>c;
if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
cout<<"\nThe triangle whose sides were entered is a valid triangle";
else
cout<<"\nThe triangle whose sides were entered is not a valid triangle";
return 0;
}
