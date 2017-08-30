#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float a1=0.0,a2=0.0,a3=0.0,a4=0.0,a5=0.0,t=100;
	cout<<"Enter the marks of five subjects";
	cin>>a1>>a2>>a3>>a4>>a5;
	cout<<"\nEnter out of how many marks were all the tests were out of ";
	cin>>t;
	cout<<"\nTotal marks is : "<<(a1+a2+a3+a4+a5)<<" out of "<<5*t;
	cout<<"\nAverage score is "<<(a1+a2+a3+a4+a5)/5<<" out of "<<t;
	cout<<"\nPercentage is "<<(((a1+a2+a3+a4+a5)*100)/(5*t));
	
	
	return 0;
}
