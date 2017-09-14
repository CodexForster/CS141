#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n=1;
cout<<"Enter the number ";
cin>>n;
int count=0;
int m=1;
while(n!= 0)
{n = n / 10;
count++;
}

cout<<endl<<"Number of digits in the entered number is : "<<count;

	return 0;
}
