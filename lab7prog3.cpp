#include <iostream>
using namespace std;

class rect
{ public:	float l,b,a,p;
	float area();
	void input()
	{cout<<"Enter length and breadth";
	cin>>l>>b;
	}
	float per();
	rect()
	{l=0;
	b=0;
	}
	};

float rect::area()
{
    a=l*b;
    return a;
}

float rect::per()
{ p=2*(l+b);
 return p;
}

int main() {
rect  one,two;
one.input();
two.input();
float a1=one.area();
float a2=two.area();
cout<<"\nAreas of the two rectangles are - "<<a1<<" and "<<a2;
float p1=one.per();
float p2=two.per();
cout<<"\nPerimeters of the rectangles are - "<<p1<<" and "<<p2;
	return 0;
}