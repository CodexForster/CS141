#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t=-40;
	cout<<"Enter the temperature in celcius";
	cin>>t;
	t=((9*t)/5)+32;
	cout<<"\nTemperature in Farenheit is : "<<t;
	return 0;
}
