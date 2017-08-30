#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float p=0.0,r=0.0,t=0.0;
	cout<<"Enter the principle, rate and time respectively";
	cin>>p>>r>>t;
	cout<<"\nSimple interest is : "<<(p*r*t)/100;
	return 0;
}
