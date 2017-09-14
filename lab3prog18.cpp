
#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"enter the cost price and selling price";
	cin>>a>>b;
	if(a>b)
	cout<<"the loss is"<<a-b;
	else
	cout<<"the profit is"<<b-a;
	return 0;
}
