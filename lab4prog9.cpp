#include <iostream>
#include <cmath>
using namespace std;


int perfect(int n)
{int sum=0;
	
	for(int i=2;i<n;i++)
	{	if(n%i==0)
		sum+=i;
	}

	if(sum+1==n)
	return 0;
	else return 1;

}

	
int main() {
	int x,y;
	cout<<"enter 2 numbers";
	cin>>x>>y;
	for(int z=x;z<=y;z++)
	{
	if(perfect(z)==0)
	{cout<<"\nA perfect number between "<<x<<" and "<<y<<" is "<<z;}
		
	}
	return 0;
}
