#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    m=strlen(s);
    int sum=0;
    for(int i=0;s[i]!=s[m];i++)
    sum+=(s[i]-48);
    cout<<"\nSum of the digits of the number is - "<<sum;
    return 0;
}
