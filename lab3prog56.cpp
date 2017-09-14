#include <iostream>
#include <cmath>
using namespace std;

int fact(int a)
{int fact=1;
for(int n=1;n<=a;n++)
fact*=n;
return fact;
}

int strong(int b,int c)
{
	int i,s[c],sum=0,p=b;
	c= 0;    
            while (b!= 0)
            {
            s[c]= b % 10;
            b/= 10;
            c++;
            }
            
            for(i=0;i<c;i++)
	{sum+=fact(s[i]);}
	if(p==sum)
	return 1;
	else
	return 0;
}

int main() {
	int x,count;
	int c=1,d;
	cout<<"Enter a number";
	cin>>d;
	for(int n=c;n<=d;n++){
	x=n;
	while(x != 0)
    {
        x /= 10;
        ++count;
    }
	if(strong(n,count)==1)
	cout<<endl<<n<<" is an strong number between "<<c<<" and "<<d;}
	return 0;
}
