#include <iostream>
using namespace std;
int main()
{
	int n,i=0;
    cout<<"Enter a number";
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++)
    if(n%i==0)
    count++;
    if(count==2)
    cout<<"\nThe entered number is a prime";
    else
    cout<<"\nThe entered number is not a prime";
    return 0;
}
