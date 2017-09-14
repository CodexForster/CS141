#include <iostream>
using namespace std;

int main() {
	float a,b,c,m;
	cout<<"enter the angles of the triangle";
	cin>>a>>b>>c;
	m=a+b+c;
	if(m==180)
	cout<<"the angles form a triangle";
	else
	cout<<"the angles do not form a triangle";
	
	
	return 0;
}
