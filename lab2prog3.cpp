#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t=-40;
	cout<<"Enter the temperature in farenheit";
	cin>>t;
	t=((t-32)*5)/9;
	cout<<"\nTemperature in Celcius is : "<<t;
	return 0;
}
