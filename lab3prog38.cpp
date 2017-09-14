#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    int z=0;
    cout<<"enter the number - ";
    cin>>s;
    m=strlen(s);
    for(int i=0;s[i]!=s[m];i++)
    {if((s[m-i-1]-48)==(s[i]-48))
    continue;
   else
   z=1;
       }
if(z==0)
cout<<"\nThe number is a palindrome";
else if (z==1)
cout<<"\nThe number is not a palindrome";
return 0;
}
