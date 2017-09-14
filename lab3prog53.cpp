#include<iostream>
using namespace std;

void perfect(int n)
{int sum=0;
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
		
	}

	if(sum+1==n)
	cout<<"\nthe number is perfect";
	else
	cout<<"\nthe number is not perfect";}
int main() {
	int x,cj,count;
	cout<<"enter the number";
	cin>>x;
	cj=x;
	while(x != 0)
    {
        x /= 10;
        ++count;
    }
	perfect(cj);
	return 0;
}
