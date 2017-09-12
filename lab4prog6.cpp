#include <iostream>
#include <cmath>
using namespace std;

void func(int a,int b)
{int n=0;
for(n=a;n<=b;n++)
 {int count=0;
 for(int z=1;z<=n;z++)
 {if(n%z==0)
 count++;}
 if(count==2)
 cout<<"\nA prime number found is "<<n;
 	
 }
	
}

int main() {
int a=0,b=0;
cout<<"Enter 2 numbers";
cin>>a>>b;
cout<<"\nSearching for prime numbers...";
func(a,b);
return 0;
}
