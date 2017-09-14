#include <iostream>
using namespace std;

int main() {
	int a=0;
	cout<<"enter a number";
	cin>>a;
	if(a>0)
	cout<<"\nThe entered number is postive ";
	else if(a<0)
	cout<<"\nThe entered number is negative ";
	else
	cout<<"\nThe entered number is equal to zero";
	return 0;
}
