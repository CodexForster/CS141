#include <iostream>
using namespace std;

int main() {
	int a=0;
	cout<<"enter a year";
	cin>>a;
	if(a%4==0)
	cout<<"\nThe entered year is a leap year";
	else
	cout<<"\nThe entered year is not a leap year";
	return 0;
}
