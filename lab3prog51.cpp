#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int b,int c)
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
	cout<<"\nthe number is armstrong ";
	else
	cout<<"\nthe number is not armstrong";
	
}

int main() {
	int x,cj,count;
	cout<<"enter a number";
	cin>>x;
	cj=x;
	while(x != 0)
    {
        x /= 10;
        ++count;
    }

	armstrong(cj,count);
	return 0;
}
