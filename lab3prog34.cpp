#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    cout<<"\nThe first digit of the number is - "<<s[0];
    m=strlen(s);
    cout<<"\nThe last digit of the number is - "<<s[m-1];
    int z;
    z=s[0]-48;    
    s[0]=s[m-1];
    s[m-1]=z+48;
    cout<<"\nThe new number is - ";
    for(int i=0;s[i]!=s[m];i++)
    cout<<s[i]-48;
    return 0;
}
