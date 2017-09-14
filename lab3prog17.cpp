#include <iostream>
#include<cmath>
using namespace std;

int main() {
	float a,b,c,d,x1,x2,k,j,x3;
	cout<<"enter the coefficients of x^2, x and constant";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>=0)
	{
		k=sqrt(d);
		x1=(-b+k)/(2*a);
		x2=(-b-k)/(2*a);
	cout<<"\nthe roots of the quadratic equation are "<<x1<<" and "<<x2;
	
	}
	else
	{j=-d;
	 k=sqrt(j);
	 x1=-b/(2*a);
	 x3=k/(2*a);
	 
	 cout<<"\nthe roots of the qaudratic equation are"<<x1<<"+i"<<x3<<" and "<<x1<<"-i"<<x3;
		
	}
	
	
	return 0;
}
