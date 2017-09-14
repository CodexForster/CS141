
#include<iostream>
using namespace std;
int main()
{
	int  end, i, j, count=0;
	cout<<"Enter ending number : ";
	cin>>end;
	for(i=2; i<=end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{	count++;
				break;
			}
		}
		if(count==0)
		{	cout<<"\nA prime number found is - ";
			cout<<i<<" ";
		}
	}
return 0;
}

