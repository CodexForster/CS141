#include <iostream>
//#include<math.h>
using namespace std;

int main() {
	// your code goes here
	float d=0;
	cout<<"Enter number of days";
	cin>>d;
	cout<<"\nNo. of days : "<<d<<"\n(Approx)No. of weeks : "<<d/7<<"\n(Approx)No. of months : "<<d/30<<"\n(Approx)No. of years : "<<d/(365);
	return 0;
}
