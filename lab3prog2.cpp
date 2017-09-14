#include <iostream>
using namespace std;

int main() {
	int a=0,b=0,c=0;
	cout<<"enter 3 numbers";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<"\nThe greatest number is : "<<a;
	else if(b>a&&b>c)
	cout<<"\nThe greatest number is : "<<b;
	else
	cout<<"\nThe greatest number is : "<<c;
	return 0;
}
