#include <iostream>
using namespace std;

int main() {
	float a,b,m=1;
	cout<<"enter the number and the power to which it is to be raised";
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	m=m*a;
	cout<<"the answer is - "<<m;
	return 0;
}
