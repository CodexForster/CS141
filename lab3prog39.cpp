#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    int on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0,ze=0;
    m=strlen(s);
    for(int i=0;s[i]!=s[m];i++)
    {if((s[i]-48)==1)
    	on++;
    else if((s[i]-48)==2)
	tw++;
    else if((s[i]-48)==3)
	th++;
    else if((s[i]-48)==4)
	fo++;
    else if((s[i]-48)==5)
	fi++;
    else if((s[i]-48)==6)
	si++;
    else if((s[i]-48)==7)
	se++;
    else if((s[i]-48)==8)
	ei++;
    else if((s[i]-48)==9)
	ni++;
    else if((s[i]-48)==0)
	ze++;
    }
   cout<<"\nFrequency of 1 - "<<on;
   cout<<"\nFrequency of 2 - "<<tw;
   cout<<"\nFrequency of 3 - "<<th;
   cout<<"\nFrequency of 4 - "<<fo;
   cout<<"\nFrequency of 5 - "<<fi;
   cout<<"\nFrequency of 6 - "<<si;
   cout<<"\nFrequency of 7 - "<<se;
   cout<<"\nFrequency of 8 - "<<ei;
   cout<<"\nFrequency of 9 - "<<ni;
   cout<<"\nFrequency of 0 - "<<ze;
   return 0;
}
