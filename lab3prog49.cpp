#include<iostream>
using namespace std;
main()
{
	int  end, i, j, count=0,sum=0;
	cout<<"Enter a number : ";
	cin>>end;
	for(i=2; i<=end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
			sum+=i;
		}
	}
	cout<<"\nSum of all primes unto the entered number = "<<sum;
}
