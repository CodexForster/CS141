#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter 'n'";
cin>>n;
cout<<"\n The first n integers:";
int count=1;
while(count<=n)
{
cout<<"  "<<count;
count++;
}
return 0;
}
