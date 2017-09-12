#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int b,int c)
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
	{sum+=pow(s[i],c);}
	if(p==sum)
	return 1;
	
}

int main() {
	int x,count;
	int c,d;
	cout<<"Enter two numbers";
	cin>>c>>d;
	for(int n=c;n<=d;n++){
	x=n;
	while(x != 0)
    {
        x /= 10;
        ++count;
    }
	if(armstrong(n,count)==1)
	cout<<endl<<n<<" is an armstrong number between "<<c<<" and "<<d;}
	return 0;
}
