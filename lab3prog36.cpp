#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int m;
    cout<<"enter the number - ";
    cin>>s;
    m=strlen(s);
    int product=1;
    for(int i=0;s[i]!=s[m];i++)
    product*=(s[i]-48);
    cout<<"\nProduct of the digits of the number is - "<<product;
    return 0;
}
