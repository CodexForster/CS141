#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float d=0.0;
	cout<<"\nEnter distance in centimeters";
	cin>>d;
	cout<<"\nThe distance in metres is : ";
	d/=100;
	cout<<d<<"\nThe distance in kilometres is : ";
	d/=1000;
	cout<<d;
	return 0;
}
