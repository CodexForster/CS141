
#include <iostream>
using namespace std;
int main()
{
int n,s;
cout<<"Enter a number ";
cin>>n;
int i=1;
while(i<=n)
{
if(i%2==0)
{
s=s+i;
}
i++;
}
cout<<"\nThe sum of all odd numbers from 1 to "<<n<<" is - ";
cout<<s;
return 0;
}
