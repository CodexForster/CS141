#include <iostream>
//#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int x=1,y=1,z=1;
	cout<<"enter x and y to find x^y";
	cin>>x>>y;
	for(int i=1;i<=y;i++)
	z=z*x;
	cout<<"\nx^y = "<<z;
	return 0;
}
