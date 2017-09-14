
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"n=";
cin>>n;
cout<<"\n The first n integers in reverse:";
int count=n;
while(count>=1)
{
cout<<"  "<<count;
count--;
}
return 0;
}
